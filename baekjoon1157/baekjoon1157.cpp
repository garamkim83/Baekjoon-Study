#include<iostream>
using namespace std;

int main(void) {
	int alph[27] = { 0, }, max = -1;
	char a = 'a', fre;
	bool isSame = false;
	while (1) {
		a = cin.get();
		if (a == '\n') break;
		alph[tolower(a) - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (alph[i] > max) {
			max = alph[i];
			fre = toupper('a' + i);
			isSame = false;
		}
		else if (alph[i] == max) isSame = true;
	}
	if (isSame == true) cout << "?";
	else cout << fre;

	return 0;
}