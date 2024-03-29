﻿Вы живете на бесконечной плоскости с введенными декартовыми координатами. За один шаг вы можете пойти в одну из четырех соседних точек (налево, направо, наверх или вниз).

Более формально, если вы стоите в точке (x,y), вы можете:

пойти налево и переместиться в точку (x−1,y), или
пойти направо и переместиться в точку (x+1,y), или
пойти наверх и переместиться в точку (x,y+1), или
пойти вниз и переместиться в точку (x,y−1).
На плоскости расположены n коробок. i-я из этих коробок находится в точке с координатами (xi,yi). Гарантируется, что коробки находятся либо на оси x, либо на оси y, то есть xi=0, или yi=0.

Вы можете подобрать коробку если находитесь в одной точке с ней. Найдите минимальное число шагов, необходимое, чтобы собрать все коробки, при условии что вы начинаете и заканчиваете в точке (0,0).

Входные данные
В первой строке содержится одно целое число t (1≤t≤100) — количество наборов входных данных.

Вторая строка каждого набора содержит одно целое число n (1≤n≤100) — количество коробок.

i-я из следующих n строк содержит два целых числа xi и yi (−100≤xi,yi≤100) — координаты i-й коробки. Гарантируется, что или xi=0, или yi=0.

Обратите внимание, что сумма значений n по всем наборам входных данных не ограничена.

Выходные данные
Для каждого набора входных данных выведите одно число — минимальное необходимое число шагов.