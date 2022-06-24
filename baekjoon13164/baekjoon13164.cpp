#include<iostream>
#include<algorithm>
using namespace std;

int h[300000] = { 0, };
int main() {
	int n, k, sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> h[i];
	sum = h[n - 1] - h[0];

	for (int i = n - 1; i > 0; i--) h[i] -= h[i - 1];
	h[0] = 0;
	sort(h, h + n, greater<int>());

	for (int i = 0; i < k - 1; i++) sum -= h[i];
	cout << sum;

	return 0;
}