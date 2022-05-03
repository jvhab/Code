Вам даны три целых числа x,y и n. Ваша задача — найти максимальное целое число k, такое что 0 ≤ k≤n и k mod x = y, где mod — операция взятия остатка от деления. Во многих языков программирования для нахождения остатка используется оператор процент %.

Другими словами, по заданным x,y и n вам нужно найти максимальное возможное целое число от 0 до n, имеющее остаток y при делении на x.

Вам нужно ответить на t независимых наборов тестовых данных. Гарантируется, что для каждого набора тестовых данных искомое k существует.

Входные данные
Первая строка теста содержит одно целое число t (1 ≤ t ≤ 5⋅104) — количество наборов тестовых данных. Затем следуют t наборов тестовых данных.

Единственная строка набора входных данных содержит три целых числа x,y и n (2 ≤ x ≤ 109; 0 ≤ y < x; y ≤ n ≤ 109).

Можно показать, что при заданных выше ограничениях искомое k всегда существует.

Выходные данные
Для каждого набора тестовых данных выведите ответ — максимальное неотрицательное целое число k, что 0 ≤ k ≤ n и k mod x = y. Гарантируется, что ответ всегда существует.