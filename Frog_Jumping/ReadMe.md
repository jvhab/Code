﻿Сейчас лягушка стоит в позиции 0 на координатной оси Ox. Она прыгает по следующему алгоритму: первый прыжок — на a вправо, второй прыжок — на b влево, третий прыжок — на a вправо, четвёртый прыжок — на b влево, и так далее.

Формально:

если лягушка уже прыгнула четное число раз (перед текущим прыжком), то она прыгает от ее текущей позиции x в позицию x+a;
иначе она прыгает от ее текущей позиции x в позицию x−b.
Ваша задача — найти позицию лягушки после k прыжков.

Но... Кое-что еще. Вы наблюдаете за t различными лягушками, так что вам нужно ответить на t независимых запросов.

Входные данные
Первая строка входных данных содержит одно целое число t (1≤t≤1000) — количество запросов.

Каждая из следующих t строк содержит запросы (один запрос на строку).

Запрос описывается в виде трех целых чисел a,b,k (1≤a,b,k≤109) — длины прыжков двух типов и количество прыжков соответственно.

Выходные данные
Выведите t целых чисел. i-е число должно быть равно ответу на i-й запрос.