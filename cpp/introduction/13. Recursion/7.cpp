/*
Лесенки

Лесенкой называется набор кубиков, в котором каждый следующий горизонтальный слой содержит меньше кубиков,
чем слой под ним.
Требуется подсчитать количество различных лесенок, которые могут быть построены ровно из N кубиков.

Входные данные:
Вводится одно число N (1⩽N⩽50).

Выходные данные:
Выведите искомое количество лесенок.

Примеры:
Ввод  Вывод
3     2
*/

#include <iostream>

#define forn(i0, end) for(int i = i0; i < end; i++)

using namespace std;

int func(int a, int b){
    if (!b)
        return 1;
    int count = 0;
    forn(1, a)
        if (b - i >= 0)
            count += func(i, b - i);

    return count;
}


int main(){
    int n, count = 0;
    cin >> n;

    forn(1, n+1)
        count += func(i, n - i);

    cout << count;
    return 0;
}