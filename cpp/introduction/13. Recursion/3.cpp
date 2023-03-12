/*
Функция Аккермана

Требуется вычислить значение A(m,n), где A — это функция Аккермана.

Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:

A(m,n) = n+1             при m = 0;
A(m,n) = A(m−1,1)        при m > 0, n=0;
A(m,n) = A(m−1,A(m,n−1)) при m > 0, n > 0.

Входные данные:
Даны два целых числа m и n (0⩽m⩽3, 0⩽n⩽7).

Выходные данные:
Выведите одно число — A(m,n).

Примеры

Ввод     Вывод
1 1      3
*/

#include <iostream>

using namespace std;

int akkerman(int m, int n) {
	if (m == 0)
		return n + 1;
	if (m > 0 && n == 0)
		return akkerman(m - 1, 1);
	if (m > 0 && n > 0)
		return akkerman(m - 1, akkerman(m, n - 1));
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << akkerman(m, n);
    return 0;
}