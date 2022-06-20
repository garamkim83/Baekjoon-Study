#include<iostream>
using namespace std;

int main() {
	char a[4];
	int n, b, c;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> c;
		b = (a[0] - 'A') * 26 * 26 + (a[1] - 'A') * 26 + (a[2] - 'A');
		if (abs(-c + b) <= 100) cout << "nice" << '\n';
		else cout << "not nice" << '\n';
	}

	return 0;
}