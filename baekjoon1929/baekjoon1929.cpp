#include<iostream>
#include<stdio.h>
//#include<algorithm>

using namespace std;
int pr[1000000];

int main(void) {
	int a, b, pos = 0;

	cin >> a >> b;

	for (int i = 0; i <= b; i++) pr[i] = i;

	for (int i = a; i <= b; i++) {
		if (a == 1)pr[1] = 0;
		if (pr[i] == 0) continue;
		for (int j = 2 * i; j <= b; j += i) pr[j] = 0;
	}

	for (int i = a; i <= b; i++)
		if (pr[i] != 0) printf("%d\n", pr[i]);

	return 0;
}