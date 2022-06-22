Вася решил пойти в магазин за продуктами. Он нашёл в своём кошельке a монет по 1 бурлю и b монет по 2 бурля. Он пока не знает суммарную стоимость всех товаров, поэтому помогите ему узнать s (s>0) — минимальную положительную целочисленную сумму денег, которую он не может заплатить без сдачи или заплатить вообще, используя только свои монеты.

Например, если a=1 и b=1 (у него есть одна монета номиналом 1 бурль и одна монета номиналом 2 бурля), то:

1 бурль он может заплатить без сдачи, заплатив одной монетой в 1 бурль,
2 бурля он может заплатить без сдачи, заплатив одной монетой в 2 бурля,
3 бурля он может заплатить без сдачи, заплатив одной монетой в 1 бурль и одной монетой в 2 бурля,
4 бурля он не может заплатить без сдачи (более того эту сумму он не может заплатить вообще).
Таким образом, для a=1 и b=1 ответ равен s=4.

Входные данные
В первой строке входных данных записано целое число t (1≤t≤104) — количество наборов входных данных в тесте.

Описание каждого набора входных данных состоит из одной строки, содержащей по два целых числа ai и bi (0≤ai,bi≤108) — количество монет у Васи по 1 бурлю и по 2 бурля соответственно.

Выходные данные
Для каждого набора входных данных на отдельной строке выведите одно целое число s (s>0) — минимальную сумму денег, которую Вася не сможет заплатить без сдачи или заплатить вообще.