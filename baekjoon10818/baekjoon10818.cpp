#include<iostream>
using namespace std;

int main(void) {
	int min = 1000001, max = -1000001;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < min) min = a;
		if (a > max) max = a;
	}
	cout << min << " " << max;
	return 0;
}