#include <stdio.h>

float add(int x, int y) {
    float sum = x + y;
    return sum;
}

float subt(int x, int y) {
    float sub = x - y;
    return sub;
}

float mult(int x, int y) {
    float mul = x * y;
    return mul;
}

float divide(int x, int y) {
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    } else {
        float div = (float)x / y;
        return div;
    }
}

int main() {
    int x, y;
    printf("Input two numbers, please: ");
    scanf("%d %d", &x, &y);

    printf("Choose method: 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division: ");
    int choose;
    scanf("%d", &choose);

    if (choose == 1) {
        float summation = add(x, y);
        printf("Addition = %f\n", summation);
    } else if (choose == 2) {
        float minus = subt(x, y);
        printf("Subtraction = %f\n", minus);
    } else if (choose == 3) {
        float into = mult(x, y);
        printf("Multiplication = %f\n", into);
    } else if (choose == 4) {
        float divv = divide(x, y);
        if (y != 0) {
            printf("Division = %.3f\n", divv);
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
