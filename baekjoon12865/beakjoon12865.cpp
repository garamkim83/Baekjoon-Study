#include<iostream>
using namespace std;

int main(){
    int n, k;
    int w[100]={0,};
    int v[100]={0,};

    scanf_s("%d %d", &n, &k);

    for(int i = 0; i < n; i++){
        scanf_s("%d %d", w[i], v[i]);
    }

    return 0;
}