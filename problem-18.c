#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[1002];
        int i, count = 0;
        scanf(" %[^\n]", str);
        for(i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
