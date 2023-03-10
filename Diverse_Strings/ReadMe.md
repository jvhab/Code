Строка называется разнообразной, если она содержит последовательные (соседние) буквы латинского алфавита и каждая бука встречается ровно один раз. Например, следующие строки являются разнообразными:«fced», «xyz», «r» и «dabcef». Следующие строки не являются разнообразными: «az», «aa», «bad» и «babc». Заметьте, что буквы 'a' и 'z' не являются соседними.

Более формально: рассмотрим позиции всех букв строки в алфавите. Эти позиции должны образовывать непрерывный отрезок, то есть они должны идти одна за другой без каких-либо пропусков. И все буквы в строке должны быть различны (дубликаты недопустимы).

Вам задана последовательность строк. Для каждой строки, если она является разнообразной, выведите «Yes». Иначе выведите «No».

Входные данные
Первая строка содержит целое число n
 (1≤n≤100
), обозначающее количество строк, которые нужно обработать. Следующие n
 строк входных данных содержат строки для проверки на разнообразность. Каждая строка состоит только из строчных букв латинского алфавита, длина каждой строки — от 1
 до 100
 букв включительно.

Выходные данные
Выведите n
 строк, по одной на каждую строку из входных данных. Строка должна содержать «Yes», если соответствующая строка из входных данных является разнообразной, и «No», если соответствующая строка из входных данных не является разнообразной. Вы можете выводить каждую букву в любом регистре (нижнем или верхнем). Например, «YeS», «no» и «yES» являются корректными ответами.