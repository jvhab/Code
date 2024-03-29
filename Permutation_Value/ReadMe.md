﻿Вам дано целое число n. Вы должны построить перестановку размера n.

Перестановка — это массив, в котором каждое число от 1 до s (где s — размер перестановки) встречается ровно один раз. Например, [2,1,4,3] — перестановка размера 4; [1,2,4,5,3] — перестановка размера 5; [1,4,3] — не перестановка (число 2 отсутствует), [2,1,3,1] — не перестановка (число 1 встречается дважды).

Подотрезок перестановки — это непрерывная подпоследовательность перестановки. Например, у перестановки [2,1,4,3] 10 подотрезков: [2], [2,1], [2,1,4], [2,1,4,3], [1], [1,4], [1,4,3], [4], [4,3] и [3].

Стоимость перестановки — это количество ее подотрезков, которые также являются перестановками. Например, стоимость перестановки [2,1,4,3] равна 3, так как подотрезки [2,1], [1] и [2,1,4,3] являются перестановками.

Вы должны вывести перестановку размера n с минимально возможной стоимостью среди всех перестановок размера n.

Входные данные
В первой строке задано одно целое число t (1≤t≤48) — количество наборов входных данных.

Затем следуют t строк. В i-й из них задано одно целое число n (3≤n≤50), обозначающее i-й набор входных данных.

Выходные данные
Для каждого набора входных данных выведите n целых чисел — перестановку размера n с минимально возможной стоимостью. Если существует несколько таких перестановок, выведите любую из них.