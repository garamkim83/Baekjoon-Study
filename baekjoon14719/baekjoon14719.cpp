#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int h, w, b[500], res = 0, R, L;

	cin >> h >> w;
	for (int i = 1; i <= w; i++) cin >> b[i];

	for (int i = 2; i < w; i++) {
		R = L = b[i];
		for (int j = 1; j < i; j++) L = max(L, b[j]);
		for (int j = i + 1; j <= w; j++) R = max(R, b[j]);
		res += min(R, L) - b[i];
	}
	cout << res;

	return 0;
}