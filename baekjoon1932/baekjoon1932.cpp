#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int sum[501][501]; //왜 지역 변수로 바꾸면 스택 오버플로우 발생??

int main() {
    int n;
    int arr[501][501];
    int big;

    cin >> n;

    //인덱스 (0,0)부터 하면 오류
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    sum[1][1] = arr[1][1];
    big = sum[1][1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum[i][j] = arr[i][j] + max(sum[i - 1][j], sum[i - 1][j - 1]);
            if (sum[i][j] > big) big = sum[i][j];
        }
    }

    cout << big;

    return 0;
}