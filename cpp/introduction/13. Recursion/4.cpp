/*
Быстрое возведение в степень

Возводить в степень можно гораздо быстрее, чем за `n` умножений! Для этого нужно воспользоваться следующими рекуррентными соотношениями:

a[n] = (a^2)^(n/2) при чётном n,
a[n] = a * a^(n−1) при нечётном n.

Реализуйте алгоритм быстрого возведения в степень. Если вы всё сделаете правильно, то количество умножений будет иметь порядок `log2 n`.

Нельзя использовать встроенную операцию возведения в степень; в силу особенностей тестирующей системы избегайте слова pow в названии функции.

Входные данные:
Вводится действительное число `a` и целое неотрицательное число `n`.

Выходные данные:
Выведите ответ задачи.

Примеры:
Ввод        Вывод
2           128
7

1.00001     2.71827
100000

*/

#include <iostream>

using namespace std;

double binary_p(double n, uint32_t p) {
	if (n == 0 || n == 1)
		return n;
	if (p == 0)
		return 1;
	if (p == 1)
		return n;
	if (p % 2 == 0)
		return binary_p(n * n, p / 2);

	return n * binary_p(n, p - 1);
}

int main() {
    double n;
	uint32_t p;
	cin >> n >> p;
	cout << binary_p(n, p);
    return 0;
}