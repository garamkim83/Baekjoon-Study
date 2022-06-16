#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	string a, b[1000];

	cin >> a;
	int l = a.length();

	for (int i = 0; i < l; i++)
		b[i] = a.substr(i, l);

	sort(b, b + l);
	for (int i = 0; i < l; i++)
		cout << b[i] << '\n';

	return 0;
}