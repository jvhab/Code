Вам дана строка s длины n и число k. Обозначим за rev(s) развёрнутую строку s (т.е. rev(s)=snsn−1...s1). Вы можете выполнять два типа операций:

заменить строку s на s+rev(s)
заменить строку s на rev(s)+s
После выполнения ровно k операций (возможно, различных) над строкой, какое количество различных строк вы можете получить из начальной строки s?

Мы обозначили конкатенацию строк s и t как s+t. Другими словами, s+t=s1s2...snt1t2...tm, где n и m - длины строк s и t соответственно.

Входные данные
Первая строка содержит число t (1≤t≤100) — количество наборов входных данных.

В следующих 2⋅t строках вводится t наборов входных данных:

Первая строка каждого набора содержит два числа n и k (1≤n≤100, 0≤k≤1000).

Вторая строка каждого набора содержит одну строку s длины n, состоящую из строчных латинских букв.

Выходные данные
Для каждого набора входных данных в отдельной строке выведите количество различных строк, которые вы можете получить после применения ровно k операций.

Можно показать, что при данных ограничениях ответ не превосходит 109.