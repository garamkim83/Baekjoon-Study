#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int n, a[1000] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, less<int>());
	for (int i = 0; i < n; i++)
		cout << a[i] << '\n';
	return 0;
}