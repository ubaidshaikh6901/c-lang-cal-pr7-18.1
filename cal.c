#include <stdio.h>

void add(void) {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

void subtract(void) {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

void multiply(void) {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
}

void divide(void) {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num2 != 0) {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}

void modulus(void) {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num2 != 0) {
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Error! Modulus by zero is not allowed.\n");
    }
}
int main() {
    int choice;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                modulus();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

