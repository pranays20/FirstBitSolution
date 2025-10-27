#include <stdio.h>

int calculateSellingPrice(int costPrice, int discount);

void main() 
{
    int costPrice, discount, sellingPrice;

    printf("Enter Cost Price of the book: ");
    scanf("%d", &costPrice);

    printf("Enter Discount percentage: ");
    scanf("%d", &discount);
    sellingPrice = calculateSellingPrice(costPrice, discount);
    
    printf("Selling Price of the book: %d\n", sellingPrice);

}

int calculateSellingPrice(int costPrice, int discount)
{
    int sellingPrice;

    if (discount >= 0) {
        if (discount <= 100) 
		{
            int discountAmount = (costPrice * discount) / 100;
            sellingPrice = costPrice - discountAmount;
        } 
		else 
		{
            printf("Invalid discount! It cannot be more than 100.\n");
            sellingPrice = costPrice;
        }
    } 
	else
	{
        printf("Invalid discount! It cannot be negative.\n");
        sellingPrice = costPrice;
    }

    return sellingPrice;
}
