Число a2
 считается средним арифметическим двух чисел a1
 и a3
, если выполняется условие: a1+a3=2⋅a2
.

Определим среднее арифметическое отклонение трех чисел a1
, a2
 и a3
 следующим образом: d(a1,a2,a3)=|a1+a3−2⋅a2|
.

Арифметика много значит для Jeevan. У него есть три числа a1
, a2
 и a3
, и он хочет минимизировать среднее арифметическое отклонение d(a1,a2,a3)
. Для этого он может выполнить следующую операцию любое количество раз (возможно, ноль):

Выбрать i,j
 из {1,2,3}
 такие, что i≠j
 и увеличить ai
 на 1
 и уменьшить aj
 на 1
.
Помогите Jeevan найти минимальное значение d(a1,a2,a3)
, которое может быть получено после применения операции любое количество раз.

Входные данные
Первая строка содержит одно целое число t
 (1≤t≤5000)
  — количество наборов входных данных.

Первая и единственная строка каждого набора входных данных содержит три целых числа a1
, a2
 и a3
 (1≤a1,a2,a3≤108)
.

Выходные данные
Для каждого набора входных данных выведите минимальное значение d(a1,a2,a3)
, которое может быть получено после применения операции любое количество раз.