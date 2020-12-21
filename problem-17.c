#include <stdio.h>
#include <string.h>

void reverse_word(char str[])
{
    int i;

    for (i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[1002], word[1002];
        int j, k;
        scanf(" %[^\n]", str);
        for(j = 0, k = 0; j < strlen(str); j++) {
            if (str[j] != ' ') {
                word[k] = str[j];
                k++;
            }
            else if (k > 0) {
                word[k] = '\0';
                k = 0;
                reverse_word(word);
                printf(" ");
            }
        }
        if (k > 0) {
            word[k] = '\0';
            reverse_word(word);
        }
        printf("\n");
    }
    return 0;
}
