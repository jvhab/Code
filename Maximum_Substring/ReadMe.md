﻿Бинарной строкой называется строка, состоящая только из символов 0 и 1. Вам дана бинарная строка s.

Для некоторой непустой подстроки† t строки s, состоящей из x символов 0 и y символов 1, определим её стоимость как:

x⋅y, если x>0 и y>0;
x2, если x>0 и y=0;
y2, если x=0 и y>0.
Вам дана бинарная строка s длины n, найдите максимальную стоимость среди всех её непустых подстрок.

† Строка a является подстрокой b, если a может быть получена из b удалением нескольких (возможно, ни одного или всех) символов из начала и нескольких (возможно, ни одного или всех) символов из конца.

Входные данные
Каждый тест состоит из нескольких наборов входных данных. Первая строка содержит единственное целое число t (1≤t≤105) — количество наборов входных данных. Далее следует описание наборов входных данных.

Первая строка каждого набора входных данных содержит единственное целое число n (1≤n≤2⋅105) — длину строки s.

Вторая строка каждого набора входных данных содержит бинарную строку s длины n.

Гарантируется, что сумма n по всем наборам входных данных не превосходит 2⋅105.

Выходные данные
Для каждого набора входных данных выведите единственное целое число — максимальную стоимость среди всех подстрок.