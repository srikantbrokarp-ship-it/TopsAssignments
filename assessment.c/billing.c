#include <stdio.h>

int main() {

    // ---------------------------------------------
    //              FOOD BILLING SYSTEM
    // ---------------------------------------------

    int choice, quantity;
    char more;

    //  Food menu with prices
    int prices[] = {0, 180,100,120,50}; 
    char *items[] = {"", "Pizza", "Burger", "Dosa", "Idli"};

    int totalBill = 0;   
    do {

        //  Display food menu
        printf("\n----------------- MENU -----------------\n");
        printf("1. Pizza         - Rs.180\n");
        printf("2. Burger        - Rs.100\n");
        printf("3. Dosa         - Rs.120\n");
        printf("4. Idli         - Rs.50\n");
        printf("----------------------------------------\n");

        // INPUT: User selects item
        printf("\nEnter the item number you want to order: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("\n? Invalid Choice! Please select from the menu.\n");
            continue; 
        }

        // INPUT: Quantity
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0) {
            printf("\n? Quantity must be greater than zero!\n");
            continue;
        }

        // Calculate cost:
        int cost = prices[choice] * quantity;
        totalBill += cost;

        printf("\n? Added: %s x %d = Rs.%d\n", items[choice], quantity, cost);
        printf("?? Current Total Bill: Rs.%d\n", totalBill);

        // INPUT: Ask if user wants to order more
        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

   
    printf("\n============================================\n");
    printf("                 FINAL BILL\n");
    printf("============================================\n");
    printf("Total Amount to Pay: Rs.%d\n", totalBill);
    printf("--------------------------------------------\n");
    printf("         THANK YOU! VISIT AGAIN ??\n");
    printf("============================================\n");
	
	return 0;
}

