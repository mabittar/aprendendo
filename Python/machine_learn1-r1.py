# machine_learn1
import numpy as np
from sklearn.datasets import load_iris
from sklearn import tree

#carrega dados
iris= load_iris()

#posição de inicio
test_idx = [0,50,100]

#training data
train_target = np.delete(iris.target, test_idx)
train_data = np.delete(iris.data, test_idx, axis=0)

#testing dta
test_target = iris.target[test_idx]
test_data = iris.data[test_idx]


clf = tree.DecisionTreeClassifier()
clf.fit(train_data, train_target)

print(test_target)
print(clf.predict(test_data))

print(test_data[1], test_target[1])
print(iris.feature_names, iris.target_names)