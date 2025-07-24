#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

int main() {
    char itemNames[MAX_ITEMS][50];
    int quantities[MAX_ITEMS];
    float unitPrices[MAX_ITEMS];
    float itemTotals[MAX_ITEMS];

    int itemCount = 0;
    char choice;
    float totalBill = 0.0, discount = 0.0, finalAmount = 0.0;

    printf("\n\n======= Welcome to the Billing System =======\n");

    // Input loop
    do {
        printf("\nEnter item name: ");
        scanf("%s", itemNames[itemCount]);

        printf("Enter quantity: ");
        scanf("%d", &quantities[itemCount]);

        printf("Enter unit price: ");
        scanf("%f", &unitPrices[itemCount]);

        // Calculate item total
        itemTotals[itemCount] = quantities[itemCount] * unitPrices[itemCount];
        totalBill += itemTotals[itemCount];
        itemCount++;

        // Ask to continue
        printf("\nAnything else? (Y/N): ");
        scanf(" %c", &choice); 

    } while ((choice == 'Y' || choice == 'y') && itemCount < MAX_ITEMS);

    // Apply discount using only if and else
    if (totalBill > 1000) {
        discount = totalBill * 0.10;
    } else {
        if (totalBill > 500) {
            discount = totalBill * 0.05;
        } else {
            discount = 0.0;
        }
    }

    finalAmount = totalBill - discount;

    // Output bill
    printf("\n============== Final Bill ==============\n");
    printf("S.No   Item Name      Qty   Unit Price   Total\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < itemCount; i++) {
        printf("%-6d %-15s %-5d %-12.2f %.2f\n",
               i + 1, itemNames[i], quantities[i], unitPrices[i], itemTotals[i]);
    }

    printf("------------------------------------------------\n");
    printf("Total Bill      : %.2f\n", totalBill);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Amount    : %.2f\n", finalAmount);
    printf("===============================================\n");
    printf("\nThank you for shopping!\n\n\n");

    return 0;
}

