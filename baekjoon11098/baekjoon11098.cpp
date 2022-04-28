#include<iostream>
using namespace std;

int main() {
    int n, p[100] = { 0, };
    int pay[100] = { 0, };
    char name[100][21];
    int mostExp = 0;
    int expPos;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        for (int j = 0; j < p[i]; j++) {
            cin >> pay[j];
            if (pay[j] > mostExp) {
                mostExp = pay[j];
                expPos = j;
            }
            cin >> name[j];
        }
        cout << name[expPos] << endl;
        mostExp = 0;
    }

    return 0;
}