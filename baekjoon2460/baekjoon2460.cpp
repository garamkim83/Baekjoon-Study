#include<iostream>
using namespace std;

int main(void) {
	int sum = 0, inp, outp, max = -1;
	for (int i = 0; i < 10; i++) {
		cin >> outp;
		sum -= outp;
		cin >> inp;
		sum += inp;
		if (max < sum) max = sum;
	}
	cout << max;
	return 0;
}