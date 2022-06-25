Массив b длины k называется хорошим, если его среднее арифметическое равно 1. Более формально, если
b1+⋯+bkk=1.
Обратите внимание, что значение b1+⋯+bkk не округляется в большую или меньшую сторону. Например, массив [1,1,1,2] имеет среднее арифметическое 1.25, а не равно 1.

Вам дан массив a из n целых чисел. За одну операцию вы можете добавить в конец массива любое неотрицательное целое число. Какое минимальное количество операций требуется для того, чтобы массив стал хорошим?

Можно показать, что этого всегда можно добиться за конечное число операций.

Входные данные
Первая строка содержит одно целое число t (1≤t≤1000) — количество наборов входных данных. Затем следуют t наборов входных данных.

Первая строка каждого тестового случая содержит одно целое число n (1≤n≤50) — длину исходного массива a.

Вторая строка каждого теста содержит n целых чисел a1,…,an (−104≤ai≤104) — элементы массива.

Выходные данные
Для каждого набора входных данных выведите одно целое число — минимальное количество неотрицательных целых чисел, которые нужно добавить к массиву, чтобы его среднее арифметическое стало равно ровно 1.