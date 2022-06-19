#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main() {
	int n, a, b[2001] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		b[a + 1000]++;
	}
	for (int i = 0; i <= 2000; i++)
		if (b[i] != 0) cout << i - 1000 << " ";

	return 0;
}