#include <stdio.h>

int main(void)
{
    int T, n, i, j, k;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        for(j = 0; j < n; j++) {
           for(k = 0; k < n; k++) {
            printf("*");
           }
           printf("\n");
        }
        if (T > 0)
        printf("\n");
    }

    return 0;
}
