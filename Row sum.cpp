#include <iostream>
#include <cmath>
using namespace std;

double f_rec(double x, int n) {   //вычисление суммы ряда с помощью рекурсии
	double S = 0;
	if (n == 1) return (x * x) / 2;
	if (n > 1){
		S += f_rec(x, n - 1) + pow((-1), n + 1) * ((pow(x, 2 * n)) / (2 * n * (2 * n - 1)));
	}
	return S;
}

double f_с(double x, int n)  //вычисление суммы ряда с помощью цикла
{
	double S = 0, k;
	for (int i = 1; i <= n; i++) {
		k = pow((-1), i + 1) * ((pow(x, 2 * i)) / (2 * i * (2 * i - 1)));
		S += k;
   }
	return S;
}

int main() {
	setlocale(0, "");
	int n;
	double f, x;
	do{
		cout << "Введите -1<=x<=1 и номер члена ряда" << endl;
		cin >> x >> n;
	} while (x >= -1 || x <= 1);
	f = x * atan(x) - log(sqrt(1 + x * x));  // функция из которой выведена последовательность
	cout << "Вычисленное значение рекурсией = " << f_rec(x, n) << endl;
	cout << "Вычисленное значение циклом = " << f_с(x, n) << endl;
	cout << "Значение функции = " << f << endl;
	return 0;
}