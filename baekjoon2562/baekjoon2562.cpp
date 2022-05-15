#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int a, pos = 1, mPos;
	int max = -1;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		if (a > max) {
			max = a;
			mPos = pos;
		}
		pos++;
	}
	cout << max << "\n" << mPos;

	return 0;
}