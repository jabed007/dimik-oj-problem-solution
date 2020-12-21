#include <stdio.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while (T--) {
        double X;
        int count = 0;
        scanf("%lf", &X);
        while(X > 1.0) {
            X = X / 2;
            count++;
        }
        printf("%d days\n", count);
    }
    return 0;
}
