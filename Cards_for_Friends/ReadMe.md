На Новый год Поликарп решил отправить открытки всем своим n друзьям. Он хочет сделать открытки своими руками и для этих целей у него есть лист бумаги размерами w×h, который можно разрезать на части.

Поликарп может разрезать любой имеющийся у него лист бумаги w×h только в двух случаях:

Если w четно, тогда можно разрезать лист пополам и получить два листа размерами w2×h;
Если h четно, тогда можно разрезать лист пополам и получить два листа размерами w×h2;
Если w и h четны одновременно, тогда Поликарп может разрезать лист по любому из правил выше.

После разрезания листа бумаги количество листов бумаги у Поликарпа увеличивается на 1.

Помогите Поликарпу понять, пользуясь только описанными выше правилами, может ли он нарезать свой лист размерами w×h хотя бы на n частей?

Входные данные
В первой строке находится одно целое число t (1≤t≤104) — количество наборов входных данных. Далее следуют t наборов входных данных.

Каждый набор входных данных состоит из одной строки в которой находится три целых числа w, h, n (1≤w,h≤104,1≤n≤109) — ширина и высота листа, имеющегося у Поликарпа и количество друзей, которым нужно отправить открытку.

Выходные данные
Для каждого набора входных данных в отдельной строке выведите:

«YES», если можно нарезать лист размерами w×h хотя бы на n частей;
«NO» в противном случае.
Вы можете выводить «YES» и «NO» в любом регистре (например, строки yEs, yes, Yes и YES будут распознаны как положительный ответ).