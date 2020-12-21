#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[1001];
        int i;
        scanf(" %[^\n]", str);
        for(i = strlen(str) - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
