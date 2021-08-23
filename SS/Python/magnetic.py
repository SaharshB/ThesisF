import scipy.io
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1 import make_axes_locatable
from IPython.display import display, clear_output
import GPy
from server1 import serv_mag, serv_disp

mat = scipy.io.loadmat('Data/data_04_06b.mat')

def intersection(lst1, lst2):
    lst3 = [value for value in lst1 if value in lst2]
    return lst3


# Assign the data from mat file
magnetic_field=mat['mag']
xz_train=mat['xz_m'][0]
yz_train=mat['yz_m'][0]
x_train=mat['x_m'][0]
y_train=mat['y_m'][0]
x_test=mat['x_test_m'][0]
y_test=mat['y_test_m'][0]

train_mag_x=np.zeros(len(x_test))
train_mag_y=np.zeros(len(x_test))
train_mag_z=np.zeros(len(x_test))

mag_x=magnetic_field[0][0][0][0]*10**6
mag_y=magnetic_field[0][0][1][0]*10**6
mag_z=magnetic_field[0][0][2][0]*10**6
magz=[]

data_locz={'X': xz_train, 'Y': yz_train,'Mag_z': mag_z}
data_locx={'X': x_train, 'Y': y_train,'Mag_x': mag_x}
data_locy={'X': x_train, 'Y': y_train,'Mag_y': mag_y}
Xx_train=pd.DataFrame(data=data_locx)
Xy_train=pd.DataFrame(data=data_locy)
Xz_train=pd.DataFrame(data=data_locz)

# Create training dataframes
X_train_z=Xz_train.groupby(['X','Y']).mean()
X_train_z=X_train_z.reset_index()
X_train_x=Xx_train.groupby(['X','Y']).mean()
X_train_x=X_train_x.reset_index()
X_train_y=Xy_train.groupby(['X','Y']).mean()
X_train_y=X_train_y.reset_index()

for i in range(len(X_train_x)):
    index=intersection(X_train_z.index[X_train_z['X']==X_train_x['X'][i]].tolist(),X_train_z.index[X_train_z['Y']==X_train_x['Y'][i]].tolist())[0]
    magz.append(X_train_z['Mag_z'][index])

data_loc={'X': X_train_x['X'], 'Y': X_train_x['Y'],'Mag_x': X_train_x['Mag_x'],'Mag_y': X_train_y['Mag_y'],'Mag_z': magz}
data_locz={'X': X_train_x['X'], 'Y': X_train_x['Y'], 'Mag_z': magz}
X_train=pd.DataFrame(data=data_loc)
x_train_z=pd.DataFrame(data=data_locz)


# Create test data frame
data_test={'X': x_test, 'Y':y_test}
X_test=pd.DataFrame(data=data_test)

# Individual Axes

# X Axis
kern_x = GPy.kern.RBF(input_dim=2, variance=3., lengthscale=1.) + GPy.kern.Bias(1)
gpr_x = GPy.models.GPRegression(X_train_x[['X','Y']].to_numpy(),X_train_x[['Mag_x']].to_numpy(),kern_x)

gpr_x.optimize()

# Y Axis
kern_y = GPy.kern.RBF(input_dim=2, variance=0.8, lengthscale=1.) + GPy.kern.Bias(1)
gpr_y = GPy.models.GPRegression(X_train_y[['X','Y']].to_numpy(),X_train_y[['Mag_y']].to_numpy(),kern_y)

gpr_y.optimize()

# Z Axis
kern_z = GPy.kern.RBF(input_dim=2, variance=5., lengthscale=1.) + GPy.kern.Bias(1)
gpr_z = GPy.models.GPRegression(Xz_train[['X','Y']].to_numpy(),Xz_train[['Mag_z']].to_numpy(),kern_z)

gpr_z.optimize()

# Joint Axis Models
kern = GPy.kern.RBF(input_dim=2, variance=3., lengthscale=0.2) + GPy.kern.Bias(1)
gpr_t = GPy.models.GPRegression(Xt_train[['X','Y']].to_numpy(),yt_train[['Mag_x','Mag_y','Mag_z']].to_numpy(),kern)

gpr_t.optimize()

# Predict the data
predict_x=gpr_x.predict(X_test.to_numpy())
predict_y=gpr_y.predict(X_test.to_numpy())
predict_z=gpr_z.predict(X_test.to_numpy())
predict = gpr_t.predict(X_test.to_numpy())

xpred=[]
ypred=[]
zpred=[]
for i in range(len(predict[:][0])):
    xpred.append(predict[0][i][0])
    ypred.append(predict[0][i][1])
    zpred.append(predict[0][i][2])

fig1, (ax1, ax2) =plt.subplots(1,2,gridspec_kw={'width_ratios': [1,2]})
cb_x=ax1.scatter(X_train_x['X'],X_train_x['Y'],c=X_train_x['Mag_x'],cmap='RdYlGn')
ax1.set_xlabel("X (in m)")
ax1.set_ylabel("Y (in m)")
ax2.scatter(x_test,y_test,c=list(predict_x)[0],cmap='RdYlGn')
ax2.set_xlabel("X (in m)")
ax2.set_ylabel("Y (in m)")
cbx=fig1.colorbar(cb_x)
cbx.ax.set_title("\u03BC T")
fig1.set_figheight(5)
fig1.set_figwidth(15)
ax1.set_title("Data Collected")
ax2.set_title("Extrapolated Field")
fig1.suptitle("Individual X Field",fontsize=20)

fig2, (ax3, ax4) =plt.subplots(1,2,gridspec_kw={'width_ratios': [1,2]})
cb_y=ax3.scatter(X_train_y['X'],X_train_y['Y'],c=X_train_y['Mag_y'],cmap='RdYlGn')
ax3.set_xlabel("X (in m)")
ax3.set_ylabel("Y (in m)")
ax4.scatter(x_test,y_test,c=list(predict_y)[0],cmap='RdYlGn')
ax4.set_xlabel("X (in m)")
ax4.set_ylabel("Y (in m)")
cby=fig2.colorbar(cb_y)
cby.ax.set_title("\u03BC T")
fig2.set_figheight(5)
fig2.set_figwidth(15)
ax3.set_title("Data Collected")
ax4.set_title("Extrapolated Field")
fig2.suptitle("Individual Y Field",fontsize=20)

fig3, (ax5, ax6) =plt.subplots(1,2,gridspec_kw={'width_ratios': [1,2]})
cb_z=ax5.scatter(X_train_z['X'],X_train_z['Y'],c=X_train_z['Mag_z'],cmap='RdYlGn')
ax5.set_xlabel("X (in m)")
ax5.set_ylabel("Y (in m)")
ax6.scatter(x_test,y_test,c=list(predict_z)[0],cmap='RdYlGn')
ax6.set_xlabel("X (in m)")
ax6.set_ylabel("Y (in m)")
cbz=fig3.colorbar(cb_z)
cbz.ax.set_title("\u03BC T")
fig3.set_figheight(5)
fig3.set_figwidth(15)
ax5.set_title("Data Collected")
ax6.set_title("Extrapolated Field")
fig3.suptitle("Individual Z Field",fontsize=20)

fig4, (ax11, ax12) =plt.subplots(1,2,gridspec_kw={'width_ratios': [1,2]})
cb_x=ax11.scatter(X_train['X'],X_train['Y'],c=X_train['Mag_x'],cmap='RdYlGn')
ax11.set_xlabel("X (in m)")
ax11.set_ylabel("Y (in m)")
ax12.scatter(x_test,y_test,c=xpred,cmap='RdYlGn')
ax12.set_xlabel("X (in m)")
ax12.set_ylabel("Y (in m)")
cbx=fig4.colorbar(cb_x)
cbx.ax.set_title("\u03BC T")
fig4.set_figheight(5)
fig4.set_figwidth(15)
ax11.set_title("Data Collected")
ax12.set_title("Extrapolated Field")
fig4.suptitle("Joint X Field",fontsize=20)

fig5, (ax13, ax14) =plt.subplots(1,2,gridspec_kw={'width_ratios': [1,2]})
cb_y=ax13.scatter(X_train['X'],X_train['Y'],c=X_train['Mag_y'],cmap='RdYlGn')
ax13.set_xlabel("X (in m)")
ax13.set_ylabel("Y (in m)")
ax14.scatter(x_test,y_test,c=ypred,cmap='RdYlGn')
ax14.set_xlabel("X (in m)")
ax14.set_ylabel("Y (in m)")
cby=fig5.colorbar(cb_y)
cby.ax.set_title("\u03BC T")
fig5.set_figheight(5)
fig5.set_figwidth(15)
ax13.set_title("Data Collected")
ax14.set_title("Extrapolated Field")
fig5.suptitle("Joint Y Field",fontsize=20)

fig6, (ax15, ax16) =plt.subplots(1,2,gridspec_kw={'width_ratios': [1,2]})
ax15.scatter(X_train['X'],X_train['Y'],c=X_train['Mag_z'],cmap='RdYlGn')
ax15.set_xlabel("X (in m)")
ax15.set_ylabel("Y (in m)")
cb_z=ax16.scatter(x_test,y_test,c=zpred,cmap='RdYlGn')
ax16.set_xlabel("X (in m)")
ax16.set_ylabel("Y (in m)")
cbz=fig6.colorbar(cb_z)
cbz.ax.set_title("\u03BC T")
fig6.set_figheight(5)
fig6.set_figwidth(15)
ax15.set_title("Data Collected")
ax16.set_title("Extrapolated Field")
fig6.suptitle("Joint Z Field",fontsize=20)

while 1:
    method=serv_mag()-48
    show_map=serv_disp()-48
    clear_output(wait=True)    
    if method==1:
        if show_map==2:
            display(fig1)
        if show_map==3:
            display(fig2)
        if show_map==4:
            display(fig3)
    if method==2:
        if show_map==2:
            display(fig4)
        if show_map==3:
            display(fig5)
        if show_map==4:
            display(fig6)