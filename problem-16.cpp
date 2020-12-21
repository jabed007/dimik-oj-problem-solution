#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void reverse_word(char word[], int key)
{
    int i;
    static int count = 0;
    for (i = strlen(word) - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    if (key) {
        printf(" ");
        count++;
    }
}

int main()
{
    char str[1002], word[1002];
    int i, j, t;

    cin >> t;
    while (t--) {
        scanf(" %[^\n]", str);
        for (i = 0, j = 0; i < strlen(str); i++) {
            if (str[i] != ' ') {
                word[j] = str[i];
                j++;
            }
            else if (j > 0) {
                word[j] = '\0';
                reverse_word(word, 1);
                j = 0;
            }
        }
        if (j > 0) {
            word[j] = '\0';
            reverse_word(word, 0);
            j = 0;
        }
        printf("\n");
    }

    return 0;
}
