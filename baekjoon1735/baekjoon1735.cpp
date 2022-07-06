#include<iostream>
#include<algorithm>
using namespace std;

//유클리드 호제법
int gcd(int x, int y) {
	if (y % x == 0) return x;
	else return gcd(y % x, x);
}

int main() {
	int a, b, c, d;
	int top, bottom;
	cin >> a >> b >> c >> d;

	int gcdNum = gcd(b, d);

	bottom = b * d / gcdNum;
	top = bottom / b * a + bottom / d * c;

	gcdNum = gcd(bottom, top);

	cout << top / gcdNum << " " << bottom / gcdNum;

	return 0;
}