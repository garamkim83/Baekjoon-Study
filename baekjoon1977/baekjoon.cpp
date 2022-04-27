#include<iostream>
using namespace std;

int main() {
    int m, n, sqr;
    int sum = 0, min = 100000;

    cin >> m >> n;

    for (int i = 1; i <= 100; i++) {
        sqr = i * i;
        if ((sqr >= m) && (sqr <= n)) {
            sum += sqr;
            if (sqr < min) min = sqr;
        }
    }

    if (sum == 0) cout << -1;
    else cout << sum << "\n" << min;

    return 0;
}