﻿У вас есть большое электронное табло, на котором можно отобразить до 998244353 десятичных цифр. Цифры отображаются таким же образом, как на электронных часах: каждая позиция для цифры состоит из 7 сегментов, которые могут быть включены или выключены, чтобы отображать различные цифры. На картинке показано, как изображаются все 10 десятичных цифр:



Как вы можете заметить, разные цифры могут потребовать включения разного количества сегментов для их отображения. Например, если вы хотите отобразить 1, надо включить 2 сегмента, а если вы хотите отобразить 8, все 7 сегментов на некоторой позиции должны быть включены.

Вы хотите отобразить очень большое целое число на экране. К сожалению, из-за бага нельзя включить более n сегментов одновременно. Поэтому вы хотите узнать, какое наибольшее целое число можно отобразить, включив не более n сегментов.

Ваша программа должна уметь обрабатывать t наборов тестовых данных.

Входные данные
В первой строке задано одно целое число t (1≤t≤100) — количество наборов входных данных.

Затем следуют сами наборы входных данных, каждый из которых состоит из одной строки, содержащей единственное число n (2≤n≤105) — максимальное количество включенных сегментов в соответствующем наборе входных данных.

Гарантируется, что сумма n по всем наборам входных данных не превосходит 105.

Выходные данные
Для каждого набора входных данных выведите наибольшее целое число, которое можно отобразить, включив не более n сегментов на экране. Обратите внимание, что ответ может не помещаться в стандартные 32-битные или 64-битные целочисленные типы данных.