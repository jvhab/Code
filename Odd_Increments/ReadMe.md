﻿Дан массив a=[a1,a2,…,an], состоящий из n положительных целых чисел. Вы можете делать с ним два вида операций:

Прибавить 1 к каждому элементу с нечётным индексом. То есть произойдут следующие присвоения: a1:=a1+1,a3:=a3+1,a5:=a5+1,….
Прибавить 1 к каждому элементу с чётным индексом. То есть произойдут следующие присвоения: a2:=a2+1,a4:=a4+1,a6:=a6+1,….
Определите, возможно ли после какого-либо количества операций сделать так, чтобы после них массив содержал только чётные или только нечётные числа. Другими словами, определите, можете ли вы сделать так, чтобы все элементы массива имели одинаковую четность после какого-либо количества операций.

Обратите внимание, что вы можете выполнять операции обоих типов любое количество раз (в том числе ни одного). Операции разных типов могут выполняться разное количество раз.

Входные данные
Первая строка входных данных содержит целое число t (1≤t≤100) — количество наборов входных данных в тесте.

Первая строка каждого набора содержит единственное целое число n (2≤n≤50) — длину массива.

Вторая строка каждого набора содержит n целых чисел a1,a2,…,an (1≤ai≤103) — элементы массива.

Обратите внимание, что после выполнения операций элементы массива могут стать больше, чем 103.

Выходные данные
Выведите t строк, каждая из которых содержит ответ на соответствующий набор входных данных. В качестве ответа выведите «YES», если после некоторого количества операций возможно сделать так, чтобы массив содержал только чётные или только нечётные числа, и «NO» иначе.

Вы можете выводить ответ в любом регистре (например, строки «yEs», «yes», «Yes» и «YES» будут распознаны как положительный ответ).