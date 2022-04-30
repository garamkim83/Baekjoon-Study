#include<iostream>
using namespace std;

int main() {
    int t, n;
    int sum = 0;
    double gpaSum = 0;

    cin >> t;

    //print like, 0.1~0.9
    cout << fixed;
    cout.precision(1);

    for (int j = 0; j < t; j++) {
        int c[11] = { 0, };
        double g[11] = { 0.0, };
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> c[i] >> g[i];
            g[i] *= c[i];
            sum += c[i];
            gpaSum += g[i];
        }
        cout << sum << " " << gpaSum / sum << endl;
        sum = 0;
        gpaSum = 0;
    }

    return 0;
}