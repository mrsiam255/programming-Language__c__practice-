#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    int length = strlen(s1);

    for (int i = 0; i < length; i++) {
        int shift;

        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') {
            shift = 1;
        } else {
            shift = 2;
        }

        char new_ch = s1[i] + shift;

        if (new_ch > 'z') {
            new_ch -= 26;
        }

        s1[i] = new_ch;
    }

    printf("%s", s1);

    return 0;
}
