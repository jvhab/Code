﻿Алиса и Боб играют в игру. У них есть бинарная строка s (каждый символ бинарной строки — либо 0, либо 1). Алиса ходит первой, потом Боб, потом снова Алиса, и так далее.

В свой ход игрок должен выбрать несколько (не менее одного) последовательных одинаковых символов в s и удалить их.

Например, если текущая строка — 10110, существует 6 возможных ходов (удаляемые символы выделены жирным):

10110→0110;
10110→1110;
10110→1010;
10110→1010;
10110→100;
10110→1011.
После удаления символов те символы, которые стояли слева и справа от удаленного блока, становятся последовательными. Т. е. следующая последовательность операций возможна: 10110→100→1.

Игра заканчивается, когда строка становится пустой. Счет каждого игрока равен кол-ву символов 1, которые он удалил.

Каждый игрок хочет набрать максимально возможное количество очков. Посчитайте, сколько очков наберет Алиса.

Входные данные
В первой строке задано одно целое число T (1≤T≤500) — количество наборов входных данных.

Каждый набор входных данных содержит одну бинарную строку s (1≤|s|≤100).

Выходные данные
Для каждого набора входных данных выведите ответ на него — счет Алисы в конце игры (количество символов 1, которые она удалит).