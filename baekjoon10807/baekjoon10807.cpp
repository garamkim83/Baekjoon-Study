#include<iostream>
using namespace std;

int main() {
	int n, v, a[100], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> v;
	for (int i = 0; i < n; i++)
		if (a[i] == v) sum++;
	cout << sum;

	return 0;
}