Поликарп играет в новую компьютерную игру. В этой игре есть n камней, выстроенных в ряд и пронумерованных слева направо. Камень с номером i обладает целочисленной силой ai. Силы всех камней различны.

Каждый ход Поликарп может уничтожить либо камень с наименьшим номером, либо камень с наибольшим номером (другими словами, либо самый левый, либо самый правый) из еще не уничтоженных камней.

Сейчас Поликарп хочет получить два достижения. Он получит их, если уничтожит камень с наименьшей силой и камень с наибольшей силой. Помогите Поликарпу узнать, какое минимальное количество ходов он должен сделать, чтобы добиться своей цели.

Например, если n=5 и a=[1,5,4,3,2], то Поликарп мог делать следующие ходы:

Уничтожить самый левый камень. После этого хода a=[5,4,3,2].
Уничтожить самый правый камень. После этого хода a=[5,4,3].
Уничтожить самый левый камень. После этого хода a=[4,3]. Поликарп уничтожил камни с наибольшей и наименьшей силой, поэтому может заканчивать игру.
Обратите внимание, что в примере выше можно закончить игру и за два шага. Например:

Уничтожить самый левый камень. После этого хода a=[5,4,3,2].
Уничтожить самый левый камень. После этого хода a=[4,3,2]. Поликарп уничтожил камни с наибольшей и наименьшей силой, поэтому может заканчивать игру.
Найдите минимальное количество ходов, необходимое для уничтожения камней с наибольшей и наименьшей силой.

Входные данные
В первой строке находится целое число t (1≤t≤100). Далее следуют t наборов входных данных.

В первой строке каждого набора входных данных находится одно целое число n (2≤n≤100) — количество камней.

Во второй строке находится n целых различных чисел a1,a2,…,an (1≤ai≤n) — силы камней.

Выходные данные
Для каждого набора входных данных выведите одно целое число — минимальное количество ходов, необходимое для уничтожения камней с наибольшей и наименьшей силой.