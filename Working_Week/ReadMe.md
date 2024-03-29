﻿Ваша рабочая неделя состоит из n дней, пронумерованных от 1 до n, после дня n снова идет день 1. И 3 из этих дней — выходные, одним из которых является последний день, день n. Когда будут два остальных дня — вам предстоит выбрать.

Выбирая дни отдыха, вы преследуете две цели:

Никакие два выходных дня не должны идти друг за другом. Обратите внимание, что вы не можете сделать день 1 выходным, потому что он следует за днем n.
Рабочие отрезки, оказавшиеся между выходными должны быть наименее похожи друг на друга. Более конкретно, если отрезки имеют длину l1, l2 и l3 дней, вы хотите максимизировать min(|l1−l2|,|l2−l3|,|l3−l1|).
Выведите максимальное значение выражения min(|l1−l2|,|l2−l3|,|l3−l1|), которое может быть получено.

Входные данные
Первая строка входных данных содержит единственное целое число t (1≤t≤1000) — количество наборов входных данных. Описание наборов входных данных следует ниже.

Единственная строка каждого набора содержит одно целое число n (6≤n≤109).

Выходные данные
Для каждого набора входных данных выведите одно число — максимальное значение, которое может быть получено.