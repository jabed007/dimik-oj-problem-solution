#include <stdio.h>

int main(void)
{
    int T, i;

    scanf("%d", &T);

    for(i = 0; i < T; i++) {
        long long int N, i, sum = 0;
        scanf("%lld", &N);
        for(i = 1; i < N; i++) {
            if (N % i == 0)
                sum = sum + i;
        }
        if (sum == N)
            printf("YES, %lld is a perfect number!\n", N);
        else
            printf("NO, %lld is not a perfect number!\n", N);
    }
    return 0;
}
