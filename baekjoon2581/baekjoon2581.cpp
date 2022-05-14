#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int a, b;
	int min = -1, sum = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i == 1) continue;
		if (i == 2) {
			min = 2;
			sum += 2;
		}
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) break;
			if (j == i - 1) {
				if (sum == 0) min = i;
				sum += i;
			}
		}
	}
	if (sum == 0) cout << -1 << "\n";
	else {
		cout << sum << "\n" << min << "\n";
	}

	return 0;
}