#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j < i - j; j++)
			printf(" ");
		for (int j = ; j < i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}