С новым годом! 2020 год также известен как год Gyeongja (경자년, gyeongja-nyeon) в Корее. Откуда это имя? Кратко рассмотрим систему Gapja, которая традиционно используется в Корее для обозначения лет.

Существует две последовательности строк, n строк s1,s2,s3,…,sn и m строк t1,t2,t3,…,tm. Эти строки состоят только из строчных букв алфавита. Среди этих строк могут быть одинаковые.

Назовем конкатенацией двух строк x и y такую строку, которая получится при последовательной записи сначала x, затем y друг за другом, не меняя порядок символов в них. Например, конкатенация строк «code» и «forces» равна строке «codeforces».

Год 1 начинается с конкатенации двух строк s1 и t1. Если год увеличивается на один, то мы берем следующую строку по порядку для каждой соответствующей последовательности. Если используемая в данный момент строка находится в конце массива, то переходим к первой строке.

Например, если n=3,m=4,s={«a», «b», «c»}, t= {«d», «e», «f», «g»}, то строки для лет с 1 по 14 - {«ad», «be», «cf», «ag», «bd», «ce», «af», «bg», «cd», «ae», «bf», «cg», «ad», «be»}. Обратите внимание, что название года может повторяться.


Вам даются две последовательности строк размером n и m, а также q запросов. Для каждого запроса вам будет указан год. Можете ли вы найти имена, соответствующие данным годам, согласно системе Gapja?

Входные данные
Первая строка содержит два целых числа n,m (1≤n,m≤20).

Следующая строка содержит n строк s1,s2,…,sn. Каждая строка состоит только из строчных букв алфавита и разделена пробелами. Длина каждой строки не менее 1 и не более 10.

Следующая строка содержит m строк t1,t2,…,tm. Каждая строка состоит только из строчных букв алфавита и разделена пробелами. Длина каждой строки не менее 1 и не более 10.

Среди заданных n+m строк могут быть одинаковые (то есть не обязательно они все различны).

Следующая строка содержит одно целое число q (1≤q≤2020).

В каждой из следующих q строк записано целое число y (1≤y≤109), обозначающее год, про который мы хотим узнать.

Выходные данные
Выведите q строк. Для каждой строки выведите название года по описанному выше правилу.