#include <stdio.h>

void main() {
    int choice, quantity;
    char moreOrders;
    float totalAmount;

    // Prices of the items
    const float PIZZA_PRICE = 180.0;
    const float BURGER_PRICE = 100.0;
    const float DOSA_PRICE = 120.0;
    const float IDLI_PRICE = 50.0;

    do {
        // Display menu
        printf("-----------------Menu------------------\n");
        printf("1. Pizza                      price = 180rs/pcs\n");
        printf("2. Burger                     price = 100rs/pcs\n");
        printf("3. Dosa                       price = 120rs/pcs\n");
        printf("4. Idli                       price = 50rs/pcs\n");
        printf("Please enter your choice: ");

        // Read user choice
        scanf("%d", &choice);

        // Process the choice
        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount = quantity * PIZZA_PRICE;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount = quantity * BURGER_PRICE;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount = quantity * DOSA_PRICE;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount = quantity * IDLI_PRICE;
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
                totalAmount = 0.0;
                break;
        }

        // Display amount if choice is valid
        if (totalAmount > 0) {
            printf("Amount: %.2f\n", totalAmount);
        }

        // Ask if user wants to place more orders
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);

    } while (moreOrders == 'y' || moreOrders == 'Y');

    printf("Thank you for your order!\n");


}
