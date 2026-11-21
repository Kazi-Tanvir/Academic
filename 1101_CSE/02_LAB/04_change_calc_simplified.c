#include<stdio.h>

int main()
{
    int amount , change ;
    printf("Enter the Amount : ");
    scanf("%d" , &amount);

    change = amount;
    
    int notes_1000 = change / 1000;
    change = change % 1000;

    int notes_500 = change / 500;
    change = change % 500;

    int notes_200 = change / 200;
    change = change % 200;

    int notes_100 = change / 100;
    change = change % 100;

    int notes_50 = change / 50;
    change = change % 50;

    int notes_20 = change / 20;
    change = change % 20;

    int notes_10 = change / 10;
    change = change % 10;

    int notes_5 = change / 5;
    change = change % 5;

    int notes_2 = change / 2;
    change = change % 2;

    int notes_1 = change / 1;
    
    printf("Change to be returned : \n");
    printf("1000 : %d\n", notes_1000);
    printf("500 : %d\n", notes_500);
    printf("200 : %d\n", notes_200);
    printf("100 : %d\n", notes_100);
    printf("50 : %d\n", notes_50);
    printf("20 : %d\n", notes_20);
    printf("10 : %d\n", notes_10);
    printf("5 : %d\n", notes_5);
    printf("2 : %d\n", notes_2);
    printf("1 : %d\n", notes_1);
}