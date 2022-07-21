Лука имеет шифр, представляющий собой последовательность из n колёсиков, каждое с написанной на нём цифрой ai. Известно, что он прокрутил i-е колёсико bi раз. Каждое колёсико может крутиться:

вверх (обозначено символом U): прокрутка вверх увеличивает значение на i-м колёсике на 1. После прокрутки 9 вверх, значение становится равным 0.
вниз (обозначено символом D): прокрутка вниз уменьшает значение на i-м колёсике на 1. После прокрутки 0 вниз, значение становится равным 9.

Лука знает конечные значения колёсиков и последовательность совершённых прокруток для каждого из них. Помогите ему восстановить изначальную последовательность цифр, чтобы взломать шифр!

Входные данные
Первая строка содержит число t (1≤t≤100) — количество наборов входных данных.

Первая строка каждого набора содержит число n (1≤n≤100) — количество колёсиков.

Вторая строка содержит n чисел ai (0≤ai≤9) — значение на i-м колёсике после всех прокруток.

Далее следуют n строк, i-я из которых содержит число bi (1≤bi≤10) и bi символов, каждый из которых является либо U, либо D — количество совершённых прокруток i-го колёсика и описание прокруток соответственно. Символы U и D означают прокрутку вверх и вниз соответственно.

Выходные данные
Для каждого набора выведите n разделённых пробелом цифр  — изначальные значения на колёсиках шифра.