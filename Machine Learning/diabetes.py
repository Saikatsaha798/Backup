import numpy as np
from matplotlib import pyplot as plt
from sklearn import datasets, linear_model
from sklearn.metrics import mean_absolute_percentage_error

diabetes = datasets.load_diabetes()

diabetes_X = diabetes.data

diabetes_X_train = diabetes_X[:-30]
diabetes_X_test = diabetes_X[-20:]

diabetes_Y_train = diabetes.target[:-30]
diabetes_Y_test = diabetes.target[-20:]

model = linear_model.LinearRegression()
model.fit(diabetes_X_train, diabetes_Y_train)
diabetes_Y_predicted = model.predict(diabetes_X_test)

# plt.scatter(diabetes_X_test, diabetes_Y_test)
# plt.plot(diabetes_X_test, diabetes_Y_predicted)
# plt.show()

print('The mean square error : ', mean_absolute_percentage_error(diabetes_Y_test, diabetes_Y_predicted))
print("Weights : ", model.coef_)
print("Intercept : ", model.intercept_)
