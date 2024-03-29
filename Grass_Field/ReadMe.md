Вы находитесь на поляне размера 2×2. Каждая клетка этой поляны может содержать траву, либо же быть пустой. Значение ai,j равно 1, если клетка (i,j) содержит траву и 0 иначе.

За один ход вы можете выбрать одну строку и один столбец и срезать всю траву в этой строке и в этом столбце. Другими словами, вы выбираете строку x и столбец y, затем вы срезаете траву во всех клетках ax,i и во всех клетках ai,y для всех i от 1 до 2. После того как вы срежете траву в клетке, она становится пустой (то есть ее значение заменяется на 0).

Ваша задача — найти минимальное количество ходов, необходимое для того, чтобы срезать траву во всех непустых клетках поляны (то есть сделать все ai,j равными нулю).

Вам необходимо ответить на t независимых наборов тестовых данных.

Входные данные
Первая строка входных данных содержит одно целое число t (1≤t≤16) — количество наборов тестовых данных. Затем следуют t наборов.

Набор тестовых данных состоит из двух строк, каждая из которых содержит два целых числа. Число в j-м столбце в i-й строке равно ai,j. Если ai,j=0, тогда клетка (i,j) пустая, а если ai,j=1, тогда клетка (i,j) содержит траву.

Выходные данные
Выведите одно целое число на набор тестовых данных — минимальное количество ходов, необходимое для того, чтобы срезать траву во всех непустых клетках поляны (то есть сделать все ai,j равными нулю) в соответствующем наборе тестовых данных.