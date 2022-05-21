Вам даны два целых числа n и m. Вам нужно построить массив a длины n состоящий из неотрицательных целых чисел (т.е. целых чисел больших или равных нулю) такой, что сумма элементов этого массива в точности равна m и величина ∑i=1n−1|ai−ai+1| максимально возможная. Напомним, что |x| — абсолютное значение x.

Другими словами, вы хотите максимизировать сумму абсолютных разностей между соседними (последовательными) элементами. Например, если массив a=[1,3,2,5,5,0], то величина, описанная выше, для этого массива равна |1−3|+|3−2|+|2−5|+|5−5|+|5−0|=2+1+3+0+5=11. Заметьте, что этот пример не показывает оптимальный ответ, но показывает, как считается необходимое значение для какого-то массива.

Вам нужно ответить на t независимых наборов тестовых данных.

Входные данные
Первая строка теста содержит одно целое число t (1≤t≤104) — количество наборов тестовых данных. Затем следуют t наборов тестовых данных.

Единственная строка набора тестовых данных содержит два целых числа n и m (1≤n,m≤109) — длину массива и его сумму соответственно.

Выходные данные
Для каждого набора тестовых данных выведите ответ на него — максимально возможное значение ∑i=1n−1|ai−ai+1| для массива a, состоящего из n неотрицательных целых чисел, сумма которых равна m.