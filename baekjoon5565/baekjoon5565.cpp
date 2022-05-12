#include<iostream>
using namespace std;

int main(void) {
	int total, a;
	cin >> total;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		total -= a;
	}
	cout << total;
	return 0;
}