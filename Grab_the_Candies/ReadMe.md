﻿Михай и Бьянка играют с мешочками конфет. У них есть последовательность a
 из n
 мешочков с конфетами. В i
-м мешке ai
 конфет. Мешочки раздаются игрокам в порядке от первого до n
-го мешочка.

Если в мешке чётное количество конфет, то его хватает Михай. В противном случае его хватает Бьянка. Как только мешок схвачен, количество конфет в нём прибавляется к общему количеству конфет игрока, который его взял.

Михай хочет покрасоваться, поэтому он хочет изменить порядок массива так, чтобы в любой момент (кроме самого начала, когда у обоих нет конфет) у Михая было строго больше конфет, чем у Бьянки. Помогите Михаю выяснить, существует ли такой способ переставить мешочки.

Входные данные
Первая строка ввода содержит целое число t
 (1≤t≤1000
) — количество наборов входных данных.

Первая строка каждого набора входных данных содержит одно целое число n
 (1≤n≤100
) — количество мешков.

Вторая строка каждого набора входных данных содержит n
 разделенных пробелами целых чисел ai
 (1≤ai≤100
) — количество конфет в каждом мешке.

Выходные данные
Для каждого набора входных данных выведите «YES» (без кавычек), если такая перестановка существует, и «NO» (без кавычек) в противном случае.

Вы можете выводить каждую букву в любом регистре (строчную или заглавную). Например, строки «yEs», «yes», «Yes» и «YES» будут приняты как положительный ответ.