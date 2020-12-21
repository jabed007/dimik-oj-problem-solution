#include <stdio.h>

int main(void)
{
    int r1, r2, B, ball_played, recquired_run, T;
    double current_rr, asking_rr;

    scanf("%d", &T);

    while(T--) {
        scanf("%d %d %d", &r1, &r2, &B);
        ball_played = 300 - B;
        current_rr = ((r2 * 1.0) / ball_played) * 6;
        recquired_run = (r1 + 1) - r2;
        asking_rr = ((recquired_run * 1.0) / B) * 6;
        printf("%0.2lf %0.2lf\n", current_rr, asking_rr);
    }
    return 0;
}
