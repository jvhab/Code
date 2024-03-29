﻿Строка s длины n (1≤n≤26) называется алфавитной, если она может быть получена с помощью следующего алгоритма:

вначале записываем в s пустую строку (то есть выполняем присваивание s := "");
далее выполним следующий шаг n раз;
при i-м выполнении шага берем i-ю строчную букву латинского алфавита и приписываем её либо слева к строке s, либо справа к строке s (то есть осуществляем присвоение s := c+s или s := s+c, где c — i-я буква латинского алфавита).
Иными словами, переберем n первых букв латинского алфавита от 'a' и далее. Каждый раз к строке s будем приписывать букву либо слева, либо справа. Строки, которые можно получить таким образом — алфавитные.

Например, следующие строки являются алфавитными: «a», «ba», «ab», «bac» и «ihfcbadeg». Следующие строки не являются алфавитными: «z», «aa», «ca», «acb», «xyz» и «ddcba».

По заданной строке определите, является ли она алфавитной.

Входные данные
В первой строке записано целое число t (1≤t≤104) — количество наборов входных данных в тесте. Далее следуют t наборов входных данных.

Каждый набор входных данных записан в отдельной строке, которая содержит s. Строка s состоит из строчных букв латинского алфавита, имеет длину от 1 до 26, включительно.

Выходные данные
Выведите t строк, каждая из строк должна содержать ответ на соответствующий набор входных данных. Выведите YES, если заданная строка s является алфавитной и NO в противном случае.

Вы можете выводить YES и NO в любом регистре (например, строки yEs, yes, Yes и YES будут распознаны как положительный ответ).