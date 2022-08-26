Вы прогуливаетесь по аллее, находящейся недалеко от вашего дома. На аллее в ряд стоит n+1 лавочек, пронумерованных от 1 до n+1 слева направо. Дистанция между лавочками i и i+1 равна a_i метров.

Изначально у вас есть m единиц энергии. Для того чтобы пройти 1 метр дистанции, вы тратите 1 единицу энергии. Вы не можете идти, если у вас нет энергии. Также вы можете восстанавливать вашу энергию, когда сидите на лавочках (и это единственный способ восстановить энергию). Когда вы сидите, вы восстанавливаете любое целое количество энергии, которое хотите (если вы сидите дольше, вы восстанавливаете больше энергии). Заметьте, что количество вашей энергии может превышать $$$m$$$.

Ваша задача — найти минимальное количество энергии, которое вам необходимо восстановить (сидя на лавочках) для того, чтобы достичь лавочки n+1, начиная у лавочки 1 (и закончить вашу прогулку).

Вам необходимо ответить на t независимых наборов тестовых данных.

Входные данные
Первая строка входных данных содержит одно целое число t (1 \le t \le 100) — количество наборов тестовых данных. Затем следуют t наборов тестовых данных.

Первая строка набора тестовых данных содержит два целых числа n и m (1 \le n \le 100; 1 \le m \le 10^4).

Вторая строка набора тестовых данных содержит n целых чисел a_1, a_2, \ldots, a_n (1 \le a_i \le 100), где a_i равно дистанции между лавочками i и i+1.

Выходные данные
Для каждого набора тестовых данных выведите одно целое число — минимальное количество энергии, которое вам необходимо восстановить (сидя на лавочках) для того, чтобы достичь лавочки n+1, начиная у лавочки 1 (и закончить вашу прогулку) в соответствующем наборе тестовых данных.