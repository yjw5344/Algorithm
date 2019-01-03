#include <iostream>
using namespace std;

int main() {

    int h1, m1, s1, h2, m2, s2;
    int ss1, ss2, ss;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
        ss1 = h1 * 3600 + m1 * 60 + s1;
        ss2 = h2 * 3600 + m2 * 60 + s2;
        ss = ss2 - ss1;
        printf("%d %d %d\n", ss / 3600, ss % 3600 / 60, ss % 60);
    }
    return 0;
}
