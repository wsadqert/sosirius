/*
Сменить регистр символа

Дан символ. Смените его регистр: заглавную букву переведите в строчную, а строчную — в заглавную; символы другого типа оставьте неизменными. В решении нельзя использовать циклы и константы с неочевидным значением.

Входные данные:
Дан символ с ASCII-кодом от 32 до 127.

Выходные данные:
Выведите ответ задачи.

Примеры:
Ввод    Вывод
n       N
4       4
O       o

*/

#include <iostream>

using namespace std;

int main() {
	char c;
	cin >> c;

	if (islower(c)) c = toupper(c);
	else if (isupper(c)) c = tolower(c);

	cout << c;
	return 0;
}