#include <stdio.h>

void menu();
void order();

int main() {
    order();
    return 0;
}

void menu() {
    printf("MENU\n");
    printf("1. bhindi - 5.00\n");
    printf("2. roti - 8.00\n");
    printf("3. daal - 4.00\n");
    printf("4. nimbu pani - 1.50\n");
    printf("5. Exit\n");
}

void order() {
    int c;
    double t = 0.0;
    double price;
    int q;

    while (1) {
        menu();

        // Validate menu choice input
        printf("Enter your food choice (1-5): ");
        if (scanf("%d", &c) != 1) {
            printf("Invalid input! Please enter a number between 1 and 5.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        if (c == 5) {
            printf("Exiting\n");
            break;
        }

        switch (c) {
            case 1:
                price = 5.00;
                printf("You chose bhindi.\n");
                break;
            case 2:
                price = 8.00;
                printf("You chose roti.\n");
                break;
            case 3:
                price = 4.00;
                printf("You chose daal.\n");
                break;
            case 4:
                price = 1.50;
                printf("You chose nimbu pani.\n");
                break;
            default:
                printf("Please choose a number between 1 and 5.\n");
                continue;
        }

        // Validate quantity input
        printf("Enter the quantity: ");
        if (scanf("%d", &q) != 1 || q <= 0) {
            printf("Invalid quantity! Please enter a positive integer.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        t += price * q;
        printf("Cost for this item: %.2lf\n", price * q);
    }
    printf("Total cost of your order: %.2lf\n", t);
}
