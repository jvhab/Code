﻿Монокарп играет в компьютерную игру. Сейчас он хочет пройти первый уровень этой игры.

Уровень — это прямоугольное клеточное поле из 2 строк и n столбцов. Персонаж Монокарпа изначально стоит в клетке (1,1) — на пересечении 1 строки и 1 столбца.

Персонаж Монокарпа за одно действие может переместиться из одной клетки в другую, если они — соседние по стороне и/или углу. Формально, из клетки (x1,y1) можно за одно действие переместиться в клетку (x2,y2), если |x1−x2|≤1 и |y1−y2|≤1. Очевидно, выходить за границы уровня нельзя.

На некоторых клетках находятся ловушки. Если персонаж Монокарпа оказывается в такой клетке, он умирает, и игра заканчивается.

Чтобы пройти уровень, персонаж Монокарпа должен оказаться в клетке (2,n) — на пересечении строки 2 и столбца n.

Помогите Монокарпу определить, можно ли пройти уровень.

Входные данные
В первой строке задано одно целое число t (1≤t≤100) — количество наборов входных данных. Далее следуют сами наборы входных данных, каждый из которых состоит из трех строк.

В первой строке задано одно целое число n (3≤n≤100) — количество столбцов.

Далее следуют две строки, описывающие уровень. i-я из этих строк описывает i-ю строку уровня — строка состоит из символов 0 и 1. Символ 0 соответствует безопасной клетке, символ 1 — клетке с ловушкой.

Дополнительное ограничение на входные данные: клетки (1,1) и (2,n) — безопасные.

Выходные данные
Для каждого набора входных данных выведите YES, если уровень можно пройти, и NO, если нельзя.