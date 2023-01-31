#include <iostream>
#include <cmath>
using namespace std;

//double frec(int n) {
//	if (n==1)
//}

double f(int x, int n)
{
	double S = 0, k;
	for (int i = 1; i <= n; i++) {
		k = pow((-1), i + 1) * ((pow(x, 2 * i)) / (2 * i * (2 * i - 1)));
		S += k;
   }
	return S;
}

int main() {
	int x, n;
	cin >> x >> n;
	cout << f(x,n) << endl;
	return 0;
}