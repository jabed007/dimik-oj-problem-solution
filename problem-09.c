#include <stdio.h>
#include <math.h>

int main(void)
{
    int T, root, n;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        root = (int) sqrt((double) n);
        if((root * root) == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
