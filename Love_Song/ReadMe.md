﻿Однажды Петя в очередной раз написал грустную песню про любовь и поспешил показать ее Васе. Песня представляет собой строку из маленьких букв английского алфавита. У Васи сразу возникло q вопросов про эту песню. Каждый вопрос представляет собой некоторый отрезок песни с позиции l до позиции r. Вася рассматривает подстроку, образованную символами на этом отрезке, а затем повторяет каждую букву в этой подстроке k раз, где k — порядковый номер буквы в алфавите. Например, если Вася выбрал подстроку «abbcb», то он повторит букву «a» один раз, каждую из букв «b» — по два раза, букву «c» — три раза, и полученная строка будет равна «abbbbcccbb», ее длина равна 10. Вася интересуется именно длиной полученной строки.

Помогите Пете ответить Васе на его вопросы, а именно, для каждого из заданных вопросов определите длину строки, которую выпишет Вася.

Входные данные
В первой строке вводятся числа n и q (1≤n≤100000, 1≤q≤100000) — длина песни и количество вопросов.

Во второй строке дана строка s — сама песня, представляющая собой строку длины n из маленьких букв английского алфавита.

В следующих q строках даны описания вопросов. Каждое описание состоит из двух чисел l и r (1≤l≤r≤n) — границы каждого из вопросов.

Выходные данные
Выведите q строк — для каждого вопроса выведите длину строки, которую выпишет Вася.