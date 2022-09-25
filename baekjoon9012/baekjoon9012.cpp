#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		int l = 0, r = 0;
		getline(cin, s);
		for (int j = 0; j < s.size(); j++) {
			if (l == 0 && s[j] == ')') {
				l--;
				break;
			}
			if (s[j] == '(') l++;
			else if (s[j] == ')') l--;
		}
		if (l == 0) cout << "YES\n";
		else if (l != 0)cout << "NO\n";
	}
	return 0;
}