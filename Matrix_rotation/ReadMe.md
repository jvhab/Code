﻿У вас есть матрица 2×2, заполненная различными целыми числами. Вы хотите, чтобы ваша матрица стала красивой. Матрица является красивой, если выполняются следующие условия:

в каждой строке первый элемент меньше второго;
в каждом столбце первый элемент меньше второго.

Вы можете совершать следующую операцию любое количество раз: повернуть матрицу на 90 градусов по часовой стрелке, так, что левый верхний элемент сдвигается в правую верхнюю ячейку, правый верхний элемент сдвигается в правую нижнюю ячейку, и так далее:


Определите, можно ли сделать матрицу красивой, выполнив ноль или более операций.

Входные данные
В первой строке задано одно целое число t (1≤t≤1000) — количество наборов входных данных.

Каждый набор входных данных состоит из двух строк; каждая из этих строк содержит по два целых числа — элементы соответствующей строки матрицы. В каждой матрице все элементы — различные целые числа от 1 до 100.

Выходные данные
Для каждого набора входных данных выведите YES, если матрица может стать красивой. В противном случае выведите NO. Каждую букву можно выводить в любом регистре (YES, yes, Yes будут распознаны как положительный ответ, NO, no и nO будут распознаны как отрицательный ответ).