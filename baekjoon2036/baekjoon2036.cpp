#include<iostream>
#include<algorithm>
using namespace std;
//2036
int64_t m[100001], arr[100001];
int main() {
	int n, a;
	int minCnt = 0, cnt = 0, zCnt = 0;
	int64_t sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < 0) m[minCnt++] = a;
		else if (a == 1) sum++;
		else if (a > 0) arr[cnt++] = a;
		else zCnt++;
	}
	sort(m, m + minCnt);
	sort(arr, arr + cnt, greater<int>());

	if (minCnt % 2 == 1 && !zCnt)
		sum += m[minCnt - 1];
	for (int i = 0; i < minCnt - 1; i += 2)
		sum += m[i] * m[i + 1];

	if (cnt % 2 == 1)
		sum += arr[cnt - 1];
	for (int i = 0; i < cnt - 1; i += 2)
		sum += arr[i] * arr[i + 1];

	cout << sum;

	return 0;
}