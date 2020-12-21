#include <stdio.h>

int main(void)
{
    int i, count = 0;

    for(i = 1000; i >= 1; i--) {
        count++;
        printf("%d\t", i);
        if (count % 5 == 0)
            printf("\n");
    }

    return 0;
}
