#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, count, len, i;
    char n[100001];

    scanf("%d", &T);
    while(T--) {
        count = 0;
        scanf(" %[^\n]", n);
        len = strlen(n);
        for(i = 0; i < len; ) {
            if(n[i] == ' ') {
            while(n[i] == ' ') {
                i++;
            }
                count++;
            }
            else {
                i++;
            }
        }
        printf("%d\n", count + 1);
    }

    return 0;
}
