#include<iostream>
using namespace std;

int main() {
    int n;
    int m[51];
    int b = 0, s = 1000001;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        if (n == 1) {
            cout << m[0] * m[0];
            return 0;
        }
        if (m[i] > b) b = m[i];
        if (m[i] < s) s = m[i];
    }
    cout << b * s;

    return 0;
}