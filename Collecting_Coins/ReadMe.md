У Поликарпа есть три сестры: Алиса, Барбара и Серена. Они коллекционируют монеты. Сейчас у Алисы есть a монет, у Барбары — b монет и у Серены — c монет. Недавно Поликарп вернулся из кругосветного путешествия, во время которого приобрел n монет.

Он хочет распределить все эти n монет между сестрами так, чтобы после этого количество монет у Алисы было равным количеству монет у Барбары, а также было равным количеству монет у Серены. Другими словами, если Поликарп отдаст A монет Алисе, B монет Барбаре и C монет Серене (A+B+C=n), то a+A=b+B=c+C. Ваша задача — определить, возможно ли распределить все n монеты между сестрами способом, описанным выше.

Заметьте, что A, B или C (количество монет, которые Поликарп дает Алисе, Барбаре и Серене соответственно) могут быть равны 0.

Вам нужно ответить на t независимых наборов входных данных.

Входные данные
Первая строка входных данных содержит одно целое число t (1≤t≤104) — количество наборов входных данных. Следующие t строк описывают наборы входных данных. Каждый набор входных данных начинается с новой строки и состоит из четырех разделенных между собой пробелами целых чисел a,b,c и n (1≤a,b,c,n≤108) — количество монет у Алисы, количество монет у Барбары, количество монет у Серены и количество монет у Поликарпа.

Выходные данные
Для каждого набора входных данных выведите «YES», если Поликарп может распределить все n монеты между своими сестрами и «NO» в противном случае.