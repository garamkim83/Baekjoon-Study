#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int n, k, c = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) c++;
		if (c == k) {
			cout << i << '\n';
			break;
		}
	}
	if (c < k) cout << 0 << endl;
	return 0;
}