У Sho есть массив a состоящий из n целых чисел. За одну операцию Sho может выбрать два различных индекса i и j, после чего удалить из массива элементы ai и aj.

Например, для массива [2,3,4,2,5] Sho может выбрать индексы 1 и 3 и удалить соответствующие элементы из массива. После этой операции массив будет выглядеть так: [3,2,5]. Заметьте, что после любой операции длина массива уменьшится на два.

После нескольких операций у Sho остался массив, содержащий только различные числа. Также, он применил операции таким образом, что длина оставшегося массива максимальна из всех возможных.

Более формально, после всех операций массив Sho удовлетворяет двум следующим критериям:

В массиве не существует таких пар индексов, что i<j и ai=aj.
Длина массива a максимальна.
Выведите длину оставшегося у Sho массива.
Входные данные
Первая строка входных данных содержит целое число t (1≤t≤103) — количество наборов входных данных.

Первая строка каждого набора данных содержит единственное число n (1≤n≤50) — длину начального массива.

Вторая строка каждого набора данных содержит n целых чисел ai (1≤ai≤104) — элементы начального массива.

Выходные данные
Для каждого набора данных выведите единственное число — длину оставшегося массива. Помните, что в оставшемся массиве все элементы различны, а его длина максимальна.