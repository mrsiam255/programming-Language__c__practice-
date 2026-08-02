#include <stdio.h>
#include <string.h>

int main() {
    int n, palin = 0;
    scanf("%d", &n);

    // Clear the input buffer after reading the integer
    getchar();

    char S[n + 1]; // Add 1 for the null terminator

    fgets(S, sizeof(S), stdin);

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (S[i] != S[j]) {
            palin++;
            break;
        }
    }

    if (palin == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
