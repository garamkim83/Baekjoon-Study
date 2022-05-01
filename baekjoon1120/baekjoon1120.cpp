#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;
    string b;

    int dif;
    int min = 51;

    cin >> a >> b;
    dif = b.length() - a.length();

    //한 자리씩 움직이면서 차이가 가장 적게 나는 자리 찾기
    for (int i = 0; i <= dif; i++) {
        int c = 0;
        for (int j = 0; j < a.length(); j++) {
            if (a[j] != b[i + j]) c++;
        }
        if (c < min) min = c;
    }
    cout << min << endl;

    return 0;
}