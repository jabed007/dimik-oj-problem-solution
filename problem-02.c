#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, i, index;
    char n[101], div[2] = {2};

    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        scanf("%s", &n);

        index = strlen(n);

        if (n[index - 1] % div[0] == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
