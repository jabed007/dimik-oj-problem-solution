#include <stdio.h>

int main(void)
{
    int T, N;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &N);
        long long int factorial = 1, i;
        for(i = 2; i <= N; i++) {
            factorial = factorial * i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}
