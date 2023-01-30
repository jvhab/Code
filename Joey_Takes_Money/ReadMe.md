﻿Джо нужны деньги. Его друг Чендлер хотел бы дать Джо их, но не может сделать это в открытую, так как Джо слишком гордый. А потому Чендлер решил схитрить и предложил Джо сыграть в игру.

В этой игре Чендлер задает Джо массив a1,a2,…,an
 (n≥2
) из положительных целых чисел (ai≥1
).

Джо может применять к заданному массиву следующую операцию произвольное количество раз:

Выбери две позиции i
 и j
 (1≤i<j≤n)
.
Выбери два целых числа x
 и y
 (x,y≥1
) таких, что x⋅y=ai⋅aj
.
Замени ai
 на x
 и aj
 на y
.
В конце Джо получит количество денег, равное сумме элементов массива.

Определите наибольшее количество денег ans
, которое он может получить, но выведите 2022⋅ans
. Почему ответ, умноженный на 2022
? Потому что мы больше никогда его не увидим!

Гарантируется, что произведение всех чисел заданного массива a
 не превосходит 1012
.

Входные данные
Каждый тест состоит из нескольких наборов входных данных. В первой строке находится одно целое число t
 (1≤t≤4000
) — количество наборов входных данных. Далее следует описание наборов входных данных.

В первой строке каждого набора входных данных задано одно целое число n
 (2≤n≤50
) — длина массива a
.

Во второй строке заданы n
 целых чисел a1,a2,…,an
 (1≤ai≤106
) — сам массив.

Гарантируется, что произведение всех ai
 не превосходит 1012
 (т. е. a1⋅a2⋅…⋅an≤1012
).

Выходные данные
Для каждого набора данных выведите максимальное количество денег, которое может получить Джо, умноженное на 2022
.