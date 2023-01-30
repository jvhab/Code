У Shohag есть последовательность целых чисел a1,a2,…,an
. Он может выполнить следующую операцию любое количество раз (возможно, ноль):

Выберите любое целое положительное число k
 (в разных операциях оно может быть разным).
Выберите любую позицию в последовательности (возможно, начало или конец последовательности, или между любыми двумя элементами) и вставьте k
 в последовательность в этой позиции.
Таким образом, последовательность a
 изменяется, и следующая операция выполняется над этой измененной последовательностью.
Например, если a=[3,3,4]
 и он выбирает k=2
, то после операции он может получить одну из последовательностей [2–,3,3,4]
, [3,2–,3,4]
, [3,3,2–,4]
 или [3,3,4,2–]
.

Shohag хочет, чтобы эта последовательность удовлетворяла следующему условию: для каждого 1≤i≤|a|
 выполнялось ai≤i
. Здесь |a|
 обозначает размер a
.

Помогите ему найти минимальное количество операций, которые он должен выполнить для достижения этой цели. Можно показать, что при ограничениях задачи всегда можно достичь этой цели за конечное число операций.

Входные данные
Первая строка содержит одно целое число t
 (1≤t≤200
)  — количество наборов входных данных.

Первая строка каждого набора входных данных содержит одно целое число n
 (1≤n≤100
) — начальную длину последовательности.

Вторая строка каждого набора входных данных содержит n
 целых чисел a1,a2,…,an
 (1≤ai≤109
) — элементы последовательности.

Выходные данные
Для каждого набора входных данных выведите одно целое число — минимальное количество операций, которое необходимо выполнить для достижения цели, указанной в условии.