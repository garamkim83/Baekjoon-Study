#include<iostream>
#include<algorithm>
using namespace std;

int val[100000] = { 0, };
int main() {
	int n, sp = 2000000000, ans[2];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> val[i];
	sort(val, val + n);
	int f = 0, b = n - 1;
	while (f < b)
	{
		int sum = val[f] + val[b];
		if (sp > abs(sum)) {
			sp = abs(sum);
			ans[0] = val[f];
			ans[1] = val[b];

			if (sum == 0) break;
		}
		if (sum < 0) f++;
		else b--;
	}
	cout << ans[0] << " " << ans[1];

	return 0;
}