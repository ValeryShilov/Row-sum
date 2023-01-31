#include <iostream>
#include <cmath>
using namespace std;

//double frec(int n) {
//	if ()
//}

double f(double x, int n)
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
	double fn, x;
	cin >> x >> n;
	fn = x * atan(x) - log(sqrt(1 + x * x));
	cout << "Вычисленное значение = " << f(x, n) << endl;
	cout << "Значение функции = " << fn << endl;
	return 0;
}