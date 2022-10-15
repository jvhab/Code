﻿Дан массив из n целых положительных чисел a1,a2,…,an (1≤ai≤1000). Выведите максимальное значение i+j такое, что ai и aj взаимно простые†, или −1, если таких i и j не существует.

Например, рассмотрим массив [1,3,5,2,4,7,7]. Максимальное значение i+j, которое можно получить, равно 5+7, так как a5=4 и a7=7 являются взаимно простые.

† Два целых числа p и q являются взаимно простыми, если единственное положительное целое число, которое является делителем их обоих, равно 1 (их наибольший общий делитель равен 1).

Входные данные
Входные данные состоят из нескольких наборов. Первая строка содержит целое число t (1≤t≤10) — количество наборов. Далее следует их описание.

Первая строка каждого набора содержит целое число n (2≤n≤2⋅105) — количество элементов в массиве.

Следующая строка содержит n разделенных пробелами положительных чисел a1, a2,..., an (1≤ai≤1000) — элементы массива.

Гарантируется, что сумма n по всем тестовым случаям не превышает 2⋅105.

Выходные данные
Для каждого набора выведите одно целое число  — максимальное значение i+j, такое, что i и j удовлетворяют условию, что ai и aj взаимно просты, или выведите −1, если не существует таких i и j.