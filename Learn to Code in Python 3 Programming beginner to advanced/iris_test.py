# loading iris dataset

from sklearn.datasets import load_iris

iris = load_iris()

print(iris.target_names)

print(iris.data.shape)

print(iris.target.shape)

# knn (k nearest neighbors)

from sklearn.neighbors import KNeighborsClassifier

knn = KNeighborsClassifier(n_neighbors=1)

x = iris.data
y = iris.target

knn.fit(x,y)

print(knn.predict([ [5.9,3,5.1,1.8] ]))

# splitting data into train an test groups

from sklearn.model_selection import train_test_split
from sklearn import metrics

# x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.4, random_state=42)
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.25, random_state=20)
print(x_train.shape)

print(x_test.shape)

knn.fit(x_train, y_train)

predictions = knn.predict(x_test)

print(predictions)

print(y_test)

performance = metrics.accuracy_score(y_test, predictions)

print(performance)

k_values = {}
k = 1

while k < 26:
    knn = KNeighborsClassifier(n_neighbors=k)
    knn.fit(x_train, y_train)
    predictions = knn.predict(x_test)
    performance = metrics.accuracy_score(y_test, predictions)
    k_values[k] = round(performance,4)
    k += 1
    
print(k_values)

from matplotlib import pyplot as plt

plt.plot(list(k_values.keys()), list(k_values.values()))
plt.xlabel("Values of K")
plt.ylabel("Performance")
plt.show()

# logistic regression

from sklearn.linear_model import LogisticRegression

logreg = LogisticRegression()
logreg.fit(x_train, y_train)
print(logreg.predict( [[6.7, 3.3, 5.7, 2.5]] ))

predictions_logreg = logreg.predict(x_test)
performance_logreg = metrics.accuracy_score(y_test, predictions_logreg)
print(performance_logreg)


