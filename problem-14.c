#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int i, count = 0;
        char str[10001], a[2];
        scanf(" %[^\n]", str);
        scanf("%s", a);
        for(i = 0; i < strlen(str); i++) {
            if (str[i] == a[0])
                count++;
        }
        if (count > 0)
            printf("Occurrence of '%c' in '%s' = %d\n", a[0], str, count);
        else
            printf("'%c' is not present\n", a[0]);
    }

    return 0;
}
