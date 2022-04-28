#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, o = 20101232, y = 19890101;
    int d, m, yr, result;
    string name;
    string oName;
    string yName;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> d >> m >> yr;
        result = (yr * 10000) + (m * 100) + (d);
        if (result < o) {
            o = result;
            oName = name;
        }
        if (result > y) {
            y = result;
            yName = name;
        }
    }
    cout << yName << endl << oName << endl;
    return 0;
}