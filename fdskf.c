#include <stdio.h>

void display(char ar[], int bal)
{
    printf("\nName: %s\nBalance: %d\n", ar, bal);
}

int with_mon(int bal)
{
    int n;
    printf("\nEnter the amount to be withdrawn: ");
    scanf("%d", &n);
    bal -= n;
    return bal;
}


int dep_mon(int bal)
{
    int n;
    printf("\nEnter the amount to be deposited: ");
    scanf("%d", &n);
    bal += n;
    return bal;
}

int main()
{
    int n = 0, balance = 0;
    char ar[20];
    printf("Enter the user's name: ");
    scanf("%s", ar);
    printf("\nEnter the balance of the user: ");
    scanf("%d", &balance);
    do
    {
        printf("\nEnter the numbers accordingly:\n1. Display balance\n2. Withdraw money\n3. Deposit money\n4. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                display(ar, balance);
                break;
            case 2:
                balance = with_mon(balance);
                break;
            case 3:
                balance = dep_mon(balance);
                break;
            case 4:
                printf("\nThe program has ended.\n");
                break;
            default:
                printf("Error: Invalid input");
        }
    } while (n != 4);
    return 0;
}