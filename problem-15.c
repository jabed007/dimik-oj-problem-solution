#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char s[1002];
        int count[26], i;
        for (i = 0; i < 26; i++)
            count[i] = 0;
        scanf(" %[^\n]", s);
        for(i = 0; i < strlen(s); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a']++;
            }
        }
        for(i = 0; i < 26; i++) {
            if (count[i] != 0)
                printf("%c = %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
