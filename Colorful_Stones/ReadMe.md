﻿Дана последовательность разноцветных камней. Цвет каждого камня — красный, зеленый, или синий. Также дана строка s. В строке s i-ый символ (1-индексация) обозначает цвет i-ого камня. Если символ «R», «G», или «B», то цвет соответствующего камня — красный, зеленый или синий, соответственно.

Изначально белка Лисска стоит на первом камне. Вы выполняете инструкции один или более раз.

Каждая инструкция может быть одного из трех типов: «RED», «GREEN», или «BLUE». После выполнения инструкции c, если Лисска стоит на камне цвета c, она перепрыгнет на камень вперед, иначе Лисска не двигается.

Вам задана строка t. Количество инструкций равняется длине строки t, а i-ый символ строки t обозначает i-ую выполняемую инструкцию.

Посчитайте конечное местоположение Лисски (номер камня, на котором она будет стоять) после выполнения всех инструкций и выведите его в 1-индексации. Гарантируется, что Лисска не выпрыгивает за пределы последовательности в процессе выполнения инструкций.

Входные данные
Входные данные состоят из двух строк. Первая строка содержит строку s (1 ≤ |s| ≤ 50). Вторая строка содержит строку t (1 ≤ |t| ≤ 50). Символы в каждой строке будут «R», «G», или «B». Гарантируется, что Лисска не выпрыгивает из последовательности.

Выходные данные
Выведите номер камня (в 1-индексации), на котором окажется Лисска после выполнения инструкций.