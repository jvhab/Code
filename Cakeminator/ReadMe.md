Дан квадратный торт, который имеет вид таблицы размером r × c. Каждая ячейка таблицы содержит либо гадкую клубничку, либо является пустой. Например, торт размера 3 × 4 может выглядеть так:


Тортминатор намерен съесть этот торт! Каждый раз, когда он ест, он выбирает строку или столбец, не содержащие гадкой клубнички, а содержащие по крайней мере одну несъеденную ячейку торта. Затем Тортминатор поедает все выбранные им ячейки торта. Тортминатор может есть сколько угодно раз.

Пожалуйста, выведите максимальное количество ячеек, которые может съесть Тортминатор.

Входные данные
Первая строка содержит два целых числа r и c (2 ≤ r, c ≤ 10), обозначающих количество строк и количество столбцов в торте. Следующие r строк содержат по c символов — j-ый символ i-ой строки обозначает содержимое ячейки в строке i и столбце j, и имеет одно из следующих значений:

символ '.' обозначает ячейку торта без гадкой клубнички;
символ 'S' обозначает ячейку торта с гадкой клубничкой.
Выходные данные
Выведите максимальное количество ячеек торта, которые может съесть тортминатор.