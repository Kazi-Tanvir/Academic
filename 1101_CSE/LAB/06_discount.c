#include <stdio.h>

//Theory 

//Input
// the price and previous points of a costumer.

// Discount (Taka) Conditions
// 1. If the price is greater than or equal to 5000, the discount is 10% of the price, but it cannot exceed 2000.
// 2. If the price is exactly 2027, the discount is 270.
// 3. If the price is between 3000 and 4000 (inclusive), the discount is 5% of the price.
// 4. If the price is greater than or equal to 500, the discount is 50.

// Point (Taka) Conditions
// 40 points = 1 Taka
// 4 taka = 10 points

// Calculation 
// payable amount = price - discount - (previous points / 40)
// new points = (payable amount * 10) / 4

//Constraints
// 1. The price must be a positive number.

//Output 
// Print the payable amount, total discount, and new points.

float discountTK(float price)
{
    float discount = 0;

    if (price >= 5000)
    {
        discount = price * .1;
        if (discount >= 2000)
        {
            discount = 2000;
        }
    }
    else if (price == 2027)
    {
        discount = 270;
    }
    else if (price >= 3000 && price <= 4000)
    {
        discount = price * .05;
    }
    else if (price >= 500)
    {
        discount = 50;
    }

    return discount;
}

int main()
{

    float real_price, pre_point, pay, discount;
    float new_point = 0;

    printf("Enter your price : ");
    scanf("%f", &real_price);
    printf("Enter your previous points : ");
    scanf("%f", &pre_point);

    float point_tk = pre_point / 40;
    discount = discountTK(real_price);
    pay = real_price - discount - point_tk;

    if (pay < 0)
    {
        pay = 0;
        float new_point_tk = -(real_price - discount - point_tk);
        new_point = new_point_tk * 40;
        discount = real_price;
    }
    new_point = new_point + .4 * real_price;
    printf("Your Price is : %.1f\n", pay);
    printf("Your Discount is : %.1f\n", real_price - pay);
    printf("Your new Point is : %f\n", new_point);
}