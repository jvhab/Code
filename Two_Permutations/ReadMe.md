﻿Вам даны три целых числа n, a и b. Определите, существуют ли две перестановки p и q длины n, для которых выполняются следующие условия:

Длина самого длинного общего префикса p и q равна a.
Длина самого длинного общего суффикса p и q равна b.
Перестановка длины n  — это массив, содержащий каждое целое число от 1 до n ровно один раз. Например, [2,3,1,5,4]  — это перестановка, но [1,2,2]  — не перестановка (2 встречается в массиве дважды), и [1,3,4] тоже не перестановка (n=3, но в массиве есть 4).

Входные данные
Каждый тест содержит несколько наборов входных данных. Первая строка содержит одно целое число t (1≤t≤104) — количество наборов входных данных. Далее следует описание наборов входных данных.

Единственная строка каждого набора входных данных содержит три целых числа n, a и b (1≤a,b≤n≤100).

Выходные данные
Для каждого набора входных данных, если такая пара перестановок существует, выведите «Yes», в противном случае выведите «No». Вы можете выводить каждую букву в любом регистре (верхнем или нижнем).