Поликарпу подарили некоторую последовательность целых чисел a длины n (1≤ai≤n). Последовательность может порадовать Поликарпа, только если она состоит из различных чисел. Для того чтобы сделать свою последовательность такой, Поликарп собирается сделать некоторое (возможно, нулевое) количество ходов.

За один ход он может:

удалить первый (крайний левый) элемент последовательности.
Например, за один ход из последовательности [3,1,4,3] получится последовательность [1,4,3], которая состоит из различных чисел.

Определите, какое минимальное количество ходов ему надо сделать, чтобы в оставшейся последовательности все элементы были различны. Иными словами, найдите длину наименьшего префикса заданной последовательности a, после удаления которого все значения в последовательности будут уникальны.

Входные данные
В первой строке входных данных записано единственное целое число t (1≤t≤104) — количество наборов входных данных.

Каждый набор входных данных состоит из двух строк.

В первой из них записано целое число n (1≤n≤2⋅105) — длина заданной последовательности a.

Вторая строка содержит n целых чисел a1,a2,…,an (1≤ai≤n) — элементы заданной последовательности a.

Гарантируется, что сумма значений n по всем наборам входных данных не превышает 2⋅105.

Выходные данные
Для каждого набора входных данных выведите ответ на отдельной строке — минимальное количество элементов, которые надо удалить из начала последовательности, чтобы все оставшиеся элементы оказались различны.