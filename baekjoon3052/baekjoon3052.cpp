#include<iostream>
using namespace std;

int main() {
	int a[42] = { 0, }, b, num = 0;
	for (int i = 0; i < 10; i++) {
		cin >> b;
		a[b % 42]++;
	}
	for (int i = 0; i < 42; i++)
		if (a[i] != 0) num++;
	cout << num;

	return 0;
}