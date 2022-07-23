﻿У вас есть два массива целых чисел a1,…,an и b1,…,bm.

Ваша задача найти любой непустой массив c1,…,ck, который является подпоследовательностью a1,…,an и подпоследовательностью b1,…,bm. Если есть несколько возможных ответов, найдите массив минимальной возможной длины. Если по-прежнему есть несколько массивов минимальной длины, вы можете найти любой такой массив. Если ни одного такого массива не существует вы должны сообщить об этом.

Последовательность a является подпоследовательностью последовательности b, если a может быть получена из b удалением нескольких (возможно нуля) элементов. Например, [3,1] это подпоследовательность [3,2,1] и [4,3,1], но не подпоследовательность [1,3,3,7] и [3,10,4].

Входные данные
В первой строке находится единственное целое число t (1≤t≤1000)  — количество наборов входных данных. Следующие 3t строк содержат описания наборов входных данных.

В первой строке каждого набора входных данных содержится два целых числа n и m (1≤n,m≤1000)  — длины массивов.

Во второй строке каждого набора входных данных находится n целых чисел a1,…,an (1≤ai≤1000)  — элементы первого массива.

В третьей строке каждого набора входных данных находится m целых чисел b1,…,bm (1≤bi≤1000)  — элементы второго массива.

Гарантируется, что сумма всех n и сумма всех m по всем наборам входных данных не превосходит 1000 (∑i=1tni,∑i=1tmi≤1000).

Выходные данные
Для каждого набора входных данных выведите «YES», если решение существует и «NO», иначе.

Если ответ «YES», на следующей строке выведите целое число k (1≤k≤1000)  — длину массива и затем k целых чисел c1,…,ck (1≤ci≤1000)  — элементы массива.

Если существует несколько возможных решений с минимальным k, выведите любое.