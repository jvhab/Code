 ряд расположены n
 кусочков торта. i
-й кусочек имеет вес ai
 (1≤i≤n
).

Ценностью торта называется максимальный суммарный вес двух подряд идущих кусочков (т. е. max(a1+a2,a2+a3,…,an−1+an)
).

Вы хотите сделать ценность торта как можно больше. Вы можете выполнить следующую операцию не более одного раза (иначе торт будет испорчен):

Выберите последовательный подотрезок a[l,r]
 кусочков торта (1≤l≤r≤n
) и разверните его.
Подотрезком a[l,r]
 массива a
 называется последовательность al,al+1,…,ar
. Если ее развернуть, массив станет равным a1,a2,…,al−2,al−1,ar––,ar−1––––,…–––,al+1––––,al––,ar+1,ar+2,…,an−1,an
.

Например, если веса кусочков изначально равны [5,2,1,4,7,3]
, можно развернуть подотрезок a[2,5]
, получив [5,7–,4–,1–,2–,3]
. Тогда ценность торта будет равна 5+7=12
 (а до разворота она была равна 4+7=11
).

Найдите максимально возможную ценность торта после выполнения не более чем одной операции.

Входные данные
Первая строка содержит одно целое число t
 (1≤t≤50
) — количество наборов входных данных.

Первая строка каждого набора содержит одно целое число n
 (2≤n≤1000
) — количество кусочков торта.

Вторая строка каждого набора содержит n
 целых чисел a1,a2,…,an
 (1≤ai≤109
), где ai
 равняется весу i
-го кусочка торта.

Выходные данные
Для каждого набора входных данных выведите одно целое число: максимальную ценность торта после выполнения не более чем одной операции.