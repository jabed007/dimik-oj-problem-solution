#include <stdio.h>

int main(void)
{
    int T, n, first, last;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        last = n % 10;
        while(n > 0) {
            first = n % 10;
            n = n / 10;
        }
        printf("Sum = %d\n", first + last);
    }
    return 0;
}
