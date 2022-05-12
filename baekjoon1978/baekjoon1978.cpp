#include<iostream>
using namespace std;

int main(void) {
	int n, a, p = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 1) continue;
		if (a == 2) {
			p++;
			continue;
		}
		for (int j = 2; j < a; j++) {
			if (a % j == 0) break;
			if (j == a - 1) p++;
		}
	}
	cout << p;
	return 0;
}