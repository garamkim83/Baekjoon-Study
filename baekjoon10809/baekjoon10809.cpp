#include<iostream>
using namespace std;

int main() {
	int arr[26], a;
	fill_n(arr, 26, -1);
	for (int i = 0; ; i++) {
		a = cin.get();
		if (a == '\n') break;
		if (arr[a - 'a'] == -1) arr[a - 'a'] = i;
	}
	for (int i = 0; i < 26; i++) cout << arr[i] << " ";

	return 0;
}