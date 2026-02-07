#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    long long X;
    scanf("%lld", &X);

    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            printf("%d", i);
            return 0;   // stop after first occurrence
        }
    }

    // if X not found
    printf("-1");
    return 0;
}
