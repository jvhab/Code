Определим значение перестановки p состоящей из n чисел 1, 2, ..., n (перестановка — это массив, в котором каждый элемент от 1 до n встречается ровно один раз) следующим образом:

изначально переменная x равна 0;
если x<p1, то прибавить p1 к x (присвоить x=x+p1), в противном случае присвоить x равным 0;
если x<p2, то прибавить p2 к x (присвоить x=x+p2), в противном случае присвоить x равным 0;
...
если x<pn, то прибавить pn к x (присвоить x=x+pn), в противном случае присвоить x равным 0;
значение перестановки равно x в конце этого процесса.
Например, для p=[4,5,1,2,3,6], значение x меняется следующим образом: 0,4,9,0,2,5,11, таким образом, значение перестановки равно 11.

Вам дано целое число n. Найдите перестановку p размера n с максимально возможным значением среди всех перестановок размера n. Если таких перестановок несколько, выведите любую из них.

Входные данные
Первая строка содержит одно целое число t (1≤t≤97) — количество наборов входных данных.

Единственная строка каждого набора содержит одно целое число n (4≤n≤100).

Выходные данные
Для каждого набора входных данных выведите n целых чисел — перестановку p размера n с максимально возможным значением среди всех перестановок размера n.