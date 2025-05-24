#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Result:%.2f +%.2f=%.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result:%.2f-%.2f=%.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result:%.2f*%.2f =%.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Shunno Dia Kunta vag Dewon Jar na!\n");
                    continue;
                }
                printf("Result:%.2f/%.2f = %.2f\n", num1, num2, result);
                break;
            default:
                printf("Invalid choice. Try Again Sir.\n");
        }

    } while (1);

    return 0;
}
