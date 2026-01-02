// #include <stdio.h>

// // Function declarations
// void add(float a, float b);
// void subtract(float a, float b);
// void multiply(float a, float b);
// void divide(float a, float b);

// int main() {
//     int choice;
//     float num1, num2;

//     printf("===== Calculator Menu =====\n");
//     printf("1. Addition\n");
//     printf("2. Subtraction\n");
//     printf("3. Multiplication\n");
//     printf("4. Division\n");
//     printf("5. Exit\n");
//     printf("===========================\n");

//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     if (choice >= 1 && choice <= 4) {
//         printf("Enter two numbers: ");
//         scanf("%f %f", &num1, &num2);
//     }

//     switch (choice) {
//         case 1:
//             add(num1, num2);
//             break;
//         case 2:
//             subtract(num1, num2);
//             break;
//         case 3:
//             multiply(num1, num2);
//             break;
//         case 4:
//             divide(num1, num2);
//             break;
//         case 5:
//             printf("Exiting program.\n");
//             break;
//         default:
//             printf("Invalid choice.\n");
//     }

//     return 0;
// }

// // Function definitions
// void add(float a, float b) {
//     printf("Result: %.2f\n", a + b);
// }

// void subtract(float a, float b) {
//     printf("Result: %.2f\n", a - b);
// }

// void multiply(float a, float b) {
//     printf("Result: %.2f\n", a * b);
// }

// void divide(float a, float b) {
//     if (b == 0) {
//         printf("Error: Division by zero is not allowed.\n");
//     } else {
//         printf("Result: %.2f\n", a / b);
//     }
// }

#include <stdio.h>

// Function to calculate bill
int calculateBill(int price[], int qty[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += price[i] * qty[i];
    }
    return total;
}

int main() {
    int price[3] = {120, 80, 60};   // prices
    int qty[3] = {0, 0, 0};         // quantities
    int choice, total;

    printf("---- Online Food Menu ----\n");
    printf("1. Pizza  - 120\n");
    printf("2. Burger - 80\n");
    printf("3. Sandwich - 60\n");
    printf("4. Place Order\n");

    do {
        printf("Enter item number: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3) {
            printf("Enter quantity: ");
            scanf("%d", &qty[choice - 1]);
        }

    } while(choice != 4);

    total = calculateBill(price, qty, 3);

    printf("\n---- Bill Details ----\n");
    printf("Pizza Qty: %d\n", qty[0]);
    printf("Burger Qty: %d\n", qty[1]);
    printf("Sandwich Qty: %d\n", qty[2]);
    printf("Total Bill: ₹%d\n", total);

    return 0;
}