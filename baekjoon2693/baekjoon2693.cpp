#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	int a[10];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> a[j];
		}
		sort(a, a + 10);
		cout << a[7] << '\n';
	}
	return 0;
}