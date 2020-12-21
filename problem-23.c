#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[101];
        int i;
        scanf(" %[^\n]", str);
        for(i = 0; i < strlen(str); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                printf("%d", str[i] - 64);
            }
        }
        printf("\n");
    }
    return 0;
}
