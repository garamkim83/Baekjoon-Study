#include<iostream>
#include<algorithm>
using namespace std;

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, dpmin[3] = { 0, }, dpmax[3] = { 0, }, inp[3] = { 0, }, pmin[3], pmax[3];

	cin >> n;
	cin >> dpmin[0] >> dpmin[1] >> dpmin[2];
	dpmax[0] = dpmin[0];
	dpmax[1] = dpmin[1];
	dpmax[2] = dpmin[2];

	for (int i = 1; i < n; i++) {
		cin >> inp[0] >> inp[1] >> inp[2];
		pmin[0] = dpmin[0], pmin[1] = dpmin[1], pmin[2] = dpmin[2];
		dpmin[0] = min(pmin[0], pmin[1]) + inp[0];
		dpmin[1] = min(min(pmin[0], pmin[1]), pmin[2]) + inp[1];
		dpmin[2] = min(pmin[1], pmin[2]) + inp[2];

		pmax[0] = dpmax[0], pmax[1] = dpmax[1], pmax[2] = dpmax[2];
		dpmax[0] = max(pmax[0], pmax[1]) + inp[0];
		dpmax[1] = max(max(pmax[0], pmax[1]), pmax[2]) + inp[1];
		dpmax[2] = max(pmax[1], pmax[2]) + inp[2];
	}
	cout << max(max(dpmax[0], dpmax[1]), dpmax[2]) << " ";
	cout << min(min(dpmin[0], dpmin[1]), dpmin[2]);

	return 0;
}