from sklearn import datasets
from sklearn.neighbors import KNeighborsClassifier

iris = datasets.load_iris()
features = iris.data[:-30]
label = iris.target[:-30]
test_features = iris.data[-40:]
test_label = iris.target[-40:]

'''
    - Iris-Setosa
    - Iris-Versicolour
    - Iris-Virginica
'''
clf = KNeighborsClassifier()
clf.fit(features, label)

predict = clf.predict(test_features)
print(predict)
print(test_label)