Вам даны два целых числа x и y. Вы хотите выбрать два строго положительных (больших нуля) целых числа a и b, а затем применить следующую операцию к x ровно a раз: заменить x на b⋅x.

Вам нужно найти два целых числа a и b, при которых x станет равным y после этого процесса. Если таких пар чисел несколько, выведите одну из них. Если такой пары чисел нет, сообщите об этом.

Например:

если x=3 и y=75, можно выбрать a=2 и b=5, тогда x станет равным 3⋅5⋅5=75;
если x=100 и y=100, можно выбрать a=3 и b=1, тогда x станет равным 100⋅1⋅1⋅1=100;
если x=42 и y=13, ответа нет, так как нельзя уменьшить x заданными операциями.
Входные данные
В первой строке задано одно целое число t (1≤t≤104) — количество наборов входных данных.

Каждый набор входных данных состоит из одной строки, содержащей два целых числа x и y (1≤x,y≤100).

Выходные данные
Если можно выбрать пару целых чисел a и b, при которой x станет равным y после описанного процесса, выведите эти два числа. Числа, которые вы выводите, должны быть не меньше 1 и не больше 109 (можно показать, что если ответ существует, то существует пара чисел a и b, соответствующая этим ограничениям). Если существует несколько таких пар, выведите любую из них.

Если невозможно выбрать такую пару чисел a и b так, что x станет равным y, выведите целое число 0 два раза.