/*
Слова с прописной буквы

Дана строка. Измените регистр символов в этой строке так, чтобы первая буква каждого слова была прописной, а остальные 
буквы — строчными. Словом называется последовательность строчных или прописных латинских букв. Все остальные символы являются 
разграничителями между словами.

Входные данные:
Дана строка из символов с ASCII-кодами от 32 до 127.

Выходные данные:
Выведите ответ задачи.

Примеры:
Ввод                                               Вывод

-a-bb-ccc                                          -A-Bb-Ccc

In a hole in the ground there lived a hobbit.      In A Hole In The Ground There Lived A Hobbit.

Everyone OF uS HAS all wE NEED                     Everyone Of Us Has All We Need

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	
	for(int i = 0; i < s.length(); i++)
		s[i] = (isalpha(s[i]) && (!i || !isalpha(s[i - 1]))) ? toupper(s[i]) : tolower(s[i]);
    
	cout << s;
	return 0;
}