Вам дан массив чисел a
 размера n
.

Вы можете выполнить следующую операцию над массивом:

Выберите два различных целых числа i,j
 (1≤i<j≤n
), замените ai
 на x
 и aj
 на y
. Чтобы не нарушать массив, должно выполняться ai|aj=x|y
, где |
 обозначает побитовое ИЛИ. Заметьте, что x
 и y
 это целые неотрицательные числа.
Пожалуйста, выведите минимальную сумму элементов массива, которую вы можете получить после выполнения вышеуказанной операции любое количество раз.

Входные данные
Каждый тест содержит несколько тестовых случаев. Первая строка содержит количество тестов t
 (1≤t≤1000)
. Далее следует описание тестовых случаев.

Первая строка каждого набора входных данных содержит целое число n
 (2≤n≤100)
 — размер массива a
.

Вторая строка каждого набора входных данных содержит n
 целых чисел a1,a2,…,an
 (0≤ai<230)
.

Выходные данные
Для каждого набора входных данных выведите в строке одно число — минимальную возможную сумму массива.