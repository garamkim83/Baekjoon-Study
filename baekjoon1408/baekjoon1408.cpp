#include<iostream>
#include<cstdlib>

int main() {
    int h, m, s;
    int timeS, timeN, f;

    scanf("%d:%d:%d", &h, &m, &s);
    timeN = 3600 * h + 60 * m + s;
    scanf("%d:%d:%d", &h, &m, &s);
    timeS = 3600 * h + 60 * m + s;

    if (timeN < timeS)
        f = timeS - timeN;
    else
        f = 24 * 3600 - timeN + timeS;

    h = f / 3600;
    m = (f - 3600 * h) / 60;
    s = f % 60;

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}