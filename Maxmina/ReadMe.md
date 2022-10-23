﻿У вас есть массив a размера n, состоящий только из нулей и единиц, и целое число k. За одну операцию вы можете выполнить одно из двух следующих действий:

Выберите 2 последовательных элемента a и замените их на их минимум (то есть сделайте a:=[a1,a2,…,ai−1,min(ai,ai+1),ai+2,…,an] для некоторого 1≤i≤n−1). Эта операция уменьшает размер a на 1.
Выберите k последовательных элементов a и замените их на их максимум (то есть сделайте a:=[a1,a2,…,ai−1,max(ai,ai+1,…,ai+k−1),ai+k,…,an] для некоторого 1≤i≤n−k+1). Эта операция уменьшает размер a на k−1.
Определите, возможно ли превратить a в [1] после нескольких (возможно, нуля) операций.

Входные данные
Каждый тест содержит несколько наборов входных данных. Первая строка содержит количество наборов входных данных t (1≤t≤1000). Далее следует их описание.

Первая строка каждого набора входных данных содержит два целых числа n и k (2≤k≤n≤50) — размер массива a и длину отрезка, на котором можно выполнить операцию второго типа.

Вторая строка каждого набора входных данных содержит n целых чисел a1,a2,…,an (ai равно 0 или 1) — элементы массива a.

Выходные данные
Для каждого набора входных данных, если возможно превратить a в [1], выведите «YES», иначе выведите «NO».