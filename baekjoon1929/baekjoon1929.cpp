#include<iostream>
using namespace std;

int main(void) {
	int a, b;
	bool* pr;

	cin >> a >> b;
	pr = new bool[b + 1]; //�����Ҵ�

	fill_n(pr, b + 1, 1); //ä���
	pr[0] = false;
	pr[1] = false;

	for (int i = 2; i <= sqrt(b); i++) {
		if (pr[i] == false) continue;
		for (int j = 2 * i; j <= b; j += i) pr[j] = false;
	}

	for (int i = a; i <= b; i++)
		if (pr[i] == true) cout << i << "\n";

	delete[] pr;

	return 0;
}