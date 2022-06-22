#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, dpmin[3] = { 0, }, dpmax[3] = { 0, }, inp[3] = { 0, };

	cin >> n;
	cin >> dpmin[0] >> dpmin[1] >> dpmin[2];
	dpmax[0] = dpmin[0];
	dpmax[1] = dpmin[1];
	dpmax[2] = dpmin[2];

	for (int i = 1; i < n; i++) {
		cin >> inp[0] >> inp[1] >> inp[2];
		dpmin[0] += min(inp[0], inp[1]);
		dpmin[1] += min(min(inp[1], inp[2]), inp[0]);
		dpmin[2] += min(inp[1], inp[2]);

		dpmax[0] += max(inp[0], inp[1]);
		dpmax[1] += max(max(inp[1], inp[2]), inp[0]);
		dpmax[2] += max(inp[1], inp[2]);
	}
	cout << max(max(dpmax[0], dpmax[1]), dpmax[2]) << '\n';
	cout << min(min(dpmin[0], dpmin[1]), dpmin[2]) << '\n';

	return 0;
}