#include <stdio.h>

int find_gcd(int a, int b)
{
    int t;
    while(b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int a, b, gcd, lcm;
        scanf("%d %d", &a, &b);
        gcd = find_gcd(a, b);
        lcm = (a * b) / gcd;
        printf("LCM = %d\n", lcm);
    }

    return 0;
}
