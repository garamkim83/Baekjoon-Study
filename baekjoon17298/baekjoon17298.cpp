#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int n;
stack<int> s;
int nge[1000001], a[1000001];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n; i >= 0; i--) {
		while (!s.empty() && s.top() <= a[i])
			s.pop();
		if (s.empty()) nge[i] = -1;
		else nge[i] = s.top();

		s.push(a[i]);
	}

	for (int i = 0; i < n; i++) cout << nge[i] << " ";

	return 0;
}