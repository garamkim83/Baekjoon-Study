#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string name;
	bool isFound = false;
	for (int i = 0; i < 5; i++) {
		cin >> name;
		if (name.find("FBI") != string::npos) {
			cout << i + 1 << " ";
			isFound = true;
		}
	}
	if (!isFound) cout << "HE GOT AWAY!";

	return 0;
}