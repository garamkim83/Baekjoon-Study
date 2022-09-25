#include<iostream>
#include<algorithm>
using namespace std;

int arr[10000000];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	long long n, m, max = -1;
	long long s, mid, e, sum;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	s = 0, e = arr[n - 1];
	while (s <= e) {
		sum = 0;
		mid = (s + e) / 2;

		for (int i = 0; i < n; i++) {
			if (arr[i] - mid > 0)sum += arr[i] - mid;
		}

		if (sum >= m) {
			s = mid + 1;
			if (mid > max) max = mid;
		}
		else e = mid - 1;
	}
	cout << max;

	return 0;
}