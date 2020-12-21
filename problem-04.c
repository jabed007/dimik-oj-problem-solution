#include <stdio.h>

int main(void)
{
    int T, n, i, j;

    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        scanf("%d", &n);
        printf("Case %d:", i);
        for(j = 1; j <= n; j++) {
            if (n % j == 0)
                printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}
