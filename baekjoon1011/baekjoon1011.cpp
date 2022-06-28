#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(0);
	int t;
	long long x, y;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		double p = sqrt(y - x);
		int q = round(sqrt(y - x));

		if (p <= q) cout << q * 2 - 1 << "\n";
		else cout << q * 2 << "\n";
	}

	return 0;
}