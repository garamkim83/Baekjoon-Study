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

    //�� �ڸ��� �����̸鼭 ���̰� ���� ���� ���� �ڸ� ã��
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