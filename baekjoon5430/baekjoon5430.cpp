#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t, n;

	cin >> t;
	for (int j = 0; j < t; j++) {
		int r = -1;
		string tmp = "";
		deque<int> arr;
		string p, input;
		bool err = false;

		cin >> p;
		cin >> n;
		cin >> input;
		if (n != 0) {
			for (int i = 0; i < input.length(); i++) {
				if (input[i] == '[' || input[i] == ',' || input[i] == ']') {
					if (input[i] != '[') arr.push_back(stoi(tmp));
					tmp = "";
					continue;
				}
				tmp += input[i];
			}
		}

		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') r *= -1;
			else {
				if (arr.empty()) {
					cout << "error\n";
					err = true;
					break;
				}
				if (r == -1) arr.pop_front();
				else {
					arr.pop_back();
					n--;
				}
			}
		}

		if (err) continue;

		cout << "[";
		if (r == -1)
			while (!arr.empty()) {
				cout << arr.front();
				arr.pop_front();
				if (arr.size()) cout << ",";
			}
		else if (r == 1)
			while (!arr.empty())
			{
				cout << arr.back();
				arr.pop_back();
				if (arr.size()) cout << ",";
			}
		cout << "]\n";
	}

	return 0;
}