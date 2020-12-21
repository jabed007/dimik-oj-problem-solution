#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[100];
        int i;
        scanf(" %[^\n]", str);
        for(i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                printf("%c", str[i]);
            }
        }
        printf("\n");
        for(i = 0; str[i] != '\0'; i++) {
            if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != ' ') {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
