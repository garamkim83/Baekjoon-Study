#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int n, res = 0, arr[10] = { 0, };
	int a, b, c;
	cin >> a >> b >> c;
	res = a * b * c;
	while (1) {
		arr[res % 10]++;
		res /= 10;
		if (res == 0) break;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\n';
	return 0;
}