/*
Пары по росту

Для танца в школе необходимо расставить школьников по парам, причём важно, чтобы рост школьника слева не превышал рост
школьника справа. Вам уже дан рост школьников в паре, необходимо только правильно определить левого и правого школьника.
Решение оформите в виде функции `void sortPair(int &l, int &r)`. Данная функция должна принимать на вход рост школьников
в паре и устанавливать переменную `l` равной росту левого школьника, а переменную `r` — росту правого.

Примеры:
Ввод        Вывод
120 120     120 120
120 130     120 130
130 120     120 130
*/

{
  if (l > r)
    swap(l, r);
}