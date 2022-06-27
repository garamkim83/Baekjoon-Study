#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string s;
	string n("nemo");
	while (getline(cin, s)) {
		if (s == "EOI") break;
		cout << (search(s.begin(), s.end(), n.begin(), n.end(),
			[](const char& c1, const char& c2) {return toupper(c1) == toupper(c2); })
			!= s.end() ? "Found\n" : "Missing\n");
	}

	return 0;
}