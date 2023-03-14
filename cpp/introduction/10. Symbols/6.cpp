/*
Вставка символов

Дана строка. Получите новую строку, вставив между всеми парами соседних символов исходной строки символ ∗.

Входные данные:
Вводится строка из больших и маленьких латинских букв длиной не более 100 символов.

Выходные данные:
Выведите ответ задачи.

Примеры:
Ввод     Вывод
A        A
Hello    H*e*l*l*o

*/

#include <iostream>

using namespace std;

int main() {
	char n;

	cin >> n;
	cout << n;
	
	while (cin >> n)
		cout << "*" << n;
	
	return 0;
}