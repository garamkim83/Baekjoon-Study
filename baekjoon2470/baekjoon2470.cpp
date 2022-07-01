#include<iostream>
#include<algorithm>
using namespace std;

int val[100000] = { 0, };
int main() {
	int n, sp = 2000000001, ans[2];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> val[i];
	sort(val, val + n);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n; j++) {
			int sum = abs(val[i] + val[j]);
			if (sum < sp) {
				sp = sum;
				ans[0] = val[i];
				ans[1] = val[j];
			}
		}
	}
	cout << ans[0] << " " << ans[1];

	return 0;
}