#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N, A, B, C;
        scanf("%d %d %d %d", &N, &A, &B, &C);

        if (A >= N && B >= N && C >= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
