В Бурятии появилось новое развлечение — математический цирк! Фокусник показывает зрителям два числа — n и k, где n — чётное. Далее он берёт все числа от 1 до n и разбивает их все на пары (a,b) (каждое число должно оказаться ровно в одной паре) так, чтобы для каждой пары число (a+k)⋅b делилось на 4 (обратите внимание, что порядок чисел в паре имеет значение), или сообщает, что, к сожалению для зрителей, такое разбиение невозможно.

Бурёнке очень нравятся такие представления, поэтому она попросила своего друга Тоню побыть фокусником, а также дала ему числа n и k.

Тоня — волк, а как известно, волки в цирке не выступают, даже в математическом. Поэтому он просит вас помочь ему. Сообщите, возможно ли подходящее разбиение на пары, и если возможно, то сообщите его.

Входные данные
Первая строка содержит одно целое число t (1≤t≤104) — количество наборов входных данных. Далее следует описание наборов входных данных.

Единственная строка каждого набора входных данных содержит два целых числа n и k (2≤n≤2⋅105, 0≤k≤109, n — чётное) — количество чисел и прибавляемое число k.

Гарантируется, что сумма n по всем наборам входных данных не превосходит 2⋅105.

Выходные данные
Для каждого набора входных данных сначала выведите строку «YES», если разбиение на пары существует, и «NO», если его нет.

Если разбиение существует, то в следующих n2 строках выведите пары разбиения, в каждой строке по 2 числа — сначала очередное число a, потом число b.