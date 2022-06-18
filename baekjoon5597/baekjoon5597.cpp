#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[30] = { 0, };
	int b;
	for (int i = 0; i < 28; i++) {
		cin >> b;
		a[b - 1] = 1;
	}
	for (int i = 0; i < 30; i++)
		if (a[i] == 0)
			cout << i + 1 << '\n';

	return 0;
}