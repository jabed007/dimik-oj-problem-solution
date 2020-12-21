#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[1001];
        int i, len;
        scanf(" %[^\n]", str);
        len = strlen(str);
        for(i = len; i >= 0; i--)
            printf("%c", str[i]);
        printf("\n");
    }

    return 0;
}
