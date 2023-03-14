/*
Количество слов

Дана строка, состоящая из слов, разделённых пробелами. Определите, сколько в ней слов.

Входные данные:
Вводится строка.

Выходные данные:
Выведите ответ задачи.

Примеры
Ввод            Вывод

Hello world     2

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "";
	getline(cin, s);
	int c = 1;
	
	for (const auto& symbol: s)
		if (symbol == ' ')
            c++;
	
	cout << c;
}