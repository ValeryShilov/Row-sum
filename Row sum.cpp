#include <iostream>
#include <cmath>
using namespace std;

double f(int x, int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++) {
		S += pow((-1), n + 1) * ((pow(x, 2 * n)) / 2 * n * (2 * n - 1));
   }
	return S;
}

int main() {
	int x, n;
	cin >> n >> x;
	cout << f(x, n) << endl;
}