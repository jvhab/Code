﻿У вас есть последовательность a1,a2,…,an длины n, состоящая из целых чисел от 1 до m. Также у вас есть строка s, состоящая из m латинских букв «B».

Вы примените n операций к этой строке.

На i-й (1≤i≤n) операции вы можете заменить ai-й либо (m+1−ai)-й символ строки s на «A». Можно заменять символ на одной и той же позиции несколько раз.
Найдите лексикографически минимальную строку, которую Вы можете получить после выполнения всех операций.

Строка x лексикографически меньше строки y такой же длины, если и только если в первой позиции, где x и y различны, в строке x находится буква, которая встречается в алфавите раньше, чем соответствующая буква в y.

Входные данные
В первой строке задано одно целое число t (1≤t≤2000) — количество наборов входных данных. Далее следуют описания этих наборов.

В первой строке дано два числа n и m (1≤n,m≤50) — длина последовательности a и длина строки s.

Во второй строке даны n чисел a1,a2,…,an (1≤ai≤m) — последовательность a.

Выходные данные
Для каждого набора входных данных выведите строку длины m — лексикографически минимальную строку, которую можно получить. Каждый символ строки должен быть заглавной латинской буквой «A» или заглавной латинской буквой «B».