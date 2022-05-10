#include<iostream>
using namespace std;
//1138
int main() {
	int n, left; //인원, 왼쪽 사람 수
	int a[10] = { 0, }; //index: 키, value: 순서
	cin >> n;
	for (int i = 0; i < n; i++) { //순서
		cin >> left;
		for (int j = 0; j < n; j++) {
			if (left == 0 && a[j] == 0) { //키
				a[j] = i + 1;
				break;
			}
			else if (a[j] == 0) left--;
		}
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";

	return 0;
}