#include<iostream>
using namespace std;
//1138
int main() {
	int n, left; //�ο�, ���� ��� ��
	int a[10] = { 0, }; //index: Ű, value: ����
	cin >> n;
	for (int i = 0; i < n; i++) { //����
		cin >> left;
		for (int j = 0; j < n; j++) {
			if (left == 0 && a[j] == 0) { //Ű
				a[j] = i + 1;
				break;
			}
			else if (a[j] == 0) left--;
		}
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";

	return 0;
}