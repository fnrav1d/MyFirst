#include <stdio.h>

int main()
{
    int quantity ;
    float  price , total_price;
    char exit;
    while(1)
    {
        total_price=0;
        while(1)
        {
            printf("Enter the price: ");
            scanf("%f", &price);
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_price = total_price+(price*quantity);
            printf("To continue press any key\n For exit press 'e':\n");
            scanf(" %c", &exit);
            if(exit=='e')
            {
             break;
            }

        }
        if(total_price>=1000)
        {
            printf("You got 10 percent discount\n");
            total_price = total_price - (total_price * .1);
            printf("Total Price = %.3f\n\n\n\n", total_price);
        }
        else
        {
            printf("Sorry, You don't get any discount\n");
            printf("Total Price = %.3f\n\n\n\n", total_price);
        }


    }


    return 0;
}
