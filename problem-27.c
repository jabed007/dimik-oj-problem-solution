#include <stdio.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, rem, res = 0, temp;
        scanf("%d", &n);
        temp = n;
        while(n != 0) {
            rem = n % 10;
            res = res + (rem * rem * rem);
            n = n / 10;
        }
        if (res == temp)
            printf("%d is an armstrong number!\n", temp);
        else
            printf("%d is not an armstrong number!\n", temp);
    }

    return 0;
}
