﻿У Гомера есть два друга — Алиса и Боб. Оба они фанаты строк.

Однажды Алиса и Боб решили сыграть в игру на строке s=s1s2…sn длиной n, состоящей из строчных английских букв. Они ходят по очереди, Алиса начинает.

В свой ход игрок должен выбрать индекс i (1≤i≤n), который не был выбран ранее, и поменять si на любую другую строчную английскую букву c, удовлетворяющую c≠si.

Когда все индексы уже были выбраны по одному разу, игра заканчивается.

Цель Алисы — сделать финальную строку лексикографически как можно меньше, в то время как цель Боба — сделать финальную строку лексикографически как можно больше. Оба они являются профессиональными игроками, поэтому всегда играют оптимально. Гомер не является профессиональным игроком, поэтому ему интересно, какой будет финальная строка.

Строка a лексикографически меньше строки b, если и только если выполняется один из следующих пунктов:

a  — префикс b, но a≠b;
в первой позиции, где a и b различны, в строке a находится буква, которая встречается в алфавите раньше, чем соответствующая буква в b.
Входные данные
Каждый тест содержит несколько наборов входных данных. Первая строка содержит t (1≤t≤1000)  — количество наборов входных данных. Описание наборов входных данных приведено ниже.

Единственная строка каждого набора входных данных содержит одну строку s (1≤|s|≤50), состоящую из строчных английских букв.

Выходные данные
Для каждого набора входных данных выведите финальную строку в отдельной строке.