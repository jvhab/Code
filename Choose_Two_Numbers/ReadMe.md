﻿Вам дан массив A, состоящий из n положительных целых чисел a1,a2,…,an, а также массив B, состоящий из m положительных целых чисел b1,b2,…,bm.

Выберите какой-то элемент a массива A и какой-то элемент b массива B так, чтобы числа a+b не было ни в массиве A, ни в массиве B.

К примеру, если A=[2,1,7], B=[1,3,4], то можно выбрать 1 с массива A и 4 с массива B, так как числа 5=1+4 нет ни в A, ни в B. В то же время, выбрать 2 с A и 1 с B нельзя, так как 3=2+1 входит в B.

Можно показать, что такая пара чисел найдется. Если существует несколько решений, выведите любое из них.

Выберите и выведите любые такие два числа.

Входные данные
Первая строка содержит одно целое число n (1≤n≤100) — количество элементов A.

Вторая строка содержит n целых чисел a1,a2,…,an (1≤ai≤200) — элементы A.

Третья строка содержит одно целое число m (1≤m≤100) — количество элементов B.

Четвертая строка содержит m целых чисел b1,b2,…,bm (1≤bi≤200) — элементы B.

Можно показать, что ответ всегда существует.

Выходные данные
Выведите два числа a и b такие, что a входит в A, b входит в B, а a+b не входит ни в A, ни в B.

Если существует несколько решений, выведите любое из них.