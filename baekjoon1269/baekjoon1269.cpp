#include<iostream>
#include<map>
using namespace std;

map <int, int> m;
int a[200000], b[200000];

int main() {
	int an, bn, ans = 0;
	cin >> an >> bn;
	for (int i = 0; i < an; i++) cin >> a[i];
	for (int i = 0; i < bn; i++) cin >> b[i];

	for (int i = 0; i < an; i++) m[a[i]]++;
	for (int i = 0; i < bn; i++) if (m[b[i]]) ans++;

	cout << an + bn - ans * 2 << endl;

	return 0;
}