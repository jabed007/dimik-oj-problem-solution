#include <stdio.h>

int main(void)
{
        int n, i, ara[101], sort = 1;
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 1; i < n; i++) {
            if(ara[i] < ara[i - 1]) {
                sort = 0;
                break;
            }
        }
        if (sort == 1)
            printf("YES\n");
        else
            printf("NO\n");

    return 0;
}
