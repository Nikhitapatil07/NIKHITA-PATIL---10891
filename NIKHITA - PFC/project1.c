
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
