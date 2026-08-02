#include <stdio.h>
#include <string.h>

void check() {
    char x[100];
    char c[] = "prity";

    printf("Enter your love name : ");
    gets(x);

    int x1 = strlen(x);
    int a = strlen(c);

    if (x1 == a && strcmp(x, c) == 0) {
        printf("Yes!! It is siam's prity\n");
    } else {
        printf("No, it is others \n");
    }
}

int main() {
    check();
    return 0;
}
