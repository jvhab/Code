У Поликарпа есть целое число n, которое не содержит цифр '0'. С этим числом он может делать следующую операцию несколько (возможно, ноль) раз:

Взять префикс длины l (иными словами, левые l цифр) числа n и развернуть его. Так, самая левая цифра меняется местами с l-й цифрой слева, вторая цифра слева меняется местами с (l−1)-й слева и т.д. Например, если n=123456789 и l=5, то новое значение n будет равно 543216789.
Обратите внимание, что для разных операций значения l могут быть разными. Допустимо, что число l равно длине числа n — в таком случае происходит переворот всего числа n.

Поликарп любит чётные числа. Поэтому он хочет сделать так, чтобы его число было чётным. При этом, Поликарп очень нетерпелив. Он хочет, чтобы было сделано как можно меньшее количество операций.

Помогите Поликарпу. Определите минимальное количество операций, которые ему необходимо совершить с числом n, чтобы сделать его чётным, или определите, что это невозможно.

Вам необходимо ответить на t независимых наборов входных данных.

Входные данные
В первой строке дано число t (1≤t≤104) — количество наборов входных данных.

В следующих t строках записано по одному целому числу n (1≤n<109). Гарантируется, что данное число не содержит в своей записи цифр '0'.

Выходные данные
Выведите t строк. В каждой строке выведите одно целое число — ответ на соответствующий набор входных данных. Если сделать число чётным невозможно, выведите -1.