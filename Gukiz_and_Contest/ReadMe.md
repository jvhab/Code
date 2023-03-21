﻿Профессору GukiZ нравятся контесты по программированию. Особенно ему нравится оценивать своих учеников по подготовленным им контестам. Сейчас он подготовил очередной контест.

Всего на занятия ходят n учеников, и до начала контеста у каждого из них есть рейтинг — некоторое положительное целое число. Ученики пронумерованы от 1 до n. Обозначим рейтинг i-го ученика за ai. GukiZ ожидает, что его ученики займут места согласно своим рейтингам.

Он считает, что каждый ученик займет место, равное . В частности, если у ученика A рейтинг строго ниже, чем у ученика B, ученик A займёт строго худшее место, чем ученик B, а если у двух учеников равные рейтинги, они разделят одно и то же место.

GukiZ хотел бы, чтобы вы определили, какие места займут ученики, если всё пойдёт именно так, как он ожидает. Помогите ему в этом.

Входные данные
В первой строке содержится целое число n (1 ≤ n ≤ 2000), количество учеников у GukiZ.

Во второй строке записано n чисел a1, a2, ... an (1 ≤ ai ≤ 2000), где ai — это рейтинг i-ого ученика (1 ≤ i ≤ n).

Выходные данные
В единственной строке выведите для каждого из n учеников место, которое он должен занять на контесте, в том же порядке, в котором они появляются во вводе.