#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str[10001];
    int i, t, count;

    scanf("%d", &t);
    while(t--) {
        count = 0;
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++) {
            if (str[i] == ' ') {
                while (str[i] == ' ') {
                    i++;
                }
                count++;
            }
        }
        printf("Count = %d\n", count + 1);
    }

    return 0;
}
