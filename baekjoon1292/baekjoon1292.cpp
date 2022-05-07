#include<iostream>
using namespace std;

int main() {
    int a, b, sum = 0, cnt = 0;
    cin >> a >> b;
    for (int i = 1; ; i++) {
        if (cnt > b) break;
        for (int j = 0; j < i; j++) {
            cnt++;
            if (cnt > b) break;
            if (cnt >= a) sum += i;
        }
    }
    cout << sum;
    return 0;
}