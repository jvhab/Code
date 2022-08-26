Дана перестановка p1,p2,…,pn длины n и целое положительное число k≤n.

За одну операцию вы можете выбрать два целых числа i и j (1≤i<j≤n) и поменять местами pi и pj.

Найдите минимальное количество операций, необходимых для того, чтобы сделать сумму p1+p2+…+pk минимально возможной.

Перестановкой является массив, состоящий из n различных целых чисел от 1 до n в произвольном порядке. Например, [2,3,1,5,4] — перестановка, но [1,2,2] не перестановка (2 встречается в массиве дважды) и [1,3,4] тоже не перестановка (n=3, но в массиве встречается 4).

Входные данные
Каждый тест состоит из нескольких наборов входных данных. В первой строке находится одно целое число t (1≤t≤100) — количество наборов входных данных. Далее следует описание наборов входных данных.

Первая строка каждого набора входных данных содержит два целых числа n и k (1≤k≤n≤100).

Вторая строка каждого набора входных данных содержит n целых чисел p1,p2,…,pn (1≤pi≤n). Гарантируется, что данные числа образуют перестановку длины n.

Выходные данные
Для каждого набора входных данных выведите одно целое число — минимальное количество операций, необходимых для того, чтобы сделать сумму p1+p2+…+pk минимально возможной.