#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int a, b;
	int pr[1000], pos = 0, sum = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		for (int j = 2; j < a; j++) {
			if (i % j == 0) break;
			if (j == a - 1) {
				pr[pos] = i;
				sum += pr[pos++];
			}
		}
	}
	if (pos == 0) cout << -1;
	else {
		sort(pr, pr + pos - 2);
		cout << sum << "\n" << pr[0];
	}

	return 0;
}