Машмох работает на заводе. Одна из его обязанностей — в конце рабочего дня выключить везде свет. Все лампочки на заводе проиндексированы от 1 до n. В комнате Машмоха есть n кнопок, проиндексированных от 1 до n. Если Машмох нажмет кнопку с индексом i, то каждая включенная лампочка с индексом не менее i отключится.

Машмох не особо башковит. Вместо того, чтобы просто нажать первую кнопку, он каждый вечер нажимает несколько случайных кнопок. Сегодня он нажал m различных кнопок b1, b2, ..., bm (кнопки нажимались последовательно в данном порядке), когда отключал свет. Теперь Машмох хочет знать для каждой лампочки индекс кнопки, которая отключила эту лампочку. Обратите внимание, что кнопка bi имеет индекс bi, а не i.

Пожалуйста, помогите Машмоху, выведите требуемые индексы.

Входные данные
В первой стоке записано два целых числа через пробел, n и m (1 ≤ n, m ≤ 100), количество лампочек на фабрике и количество нажатых кнопок, соответственно. В следующей строке записано m различных целых чисел через пробел b1, b2, ..., bm (1 ≤ bi ≤ n).

Гарантируется, что после нажатия всех кнопок все лампочки отключатся.

Выходные данные
Выведите n целых чисел через пробел, i-е число — это порядковый номер кнопки, выключающей i-ю лампочку.