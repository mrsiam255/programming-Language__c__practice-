#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    scanf("%s", S);

    char target[] = "hello";
    int j = 0; // Pointer for target string

    // Traverse through the given string S
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == target[j]) {
            j++; // Move to next character in target
        }
        // If we have matched all characters in "hello"
        if (j == 5) {
            printf("YES\n");
            return 0;
        }
    }

    // If we complete the loop without finding "hello"
    printf("NO\n");
    return 0;
}
