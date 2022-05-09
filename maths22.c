/*PROGRAM FOR COINS COUNT IN BOX*/
#include <stdio.h>

int main()
{
    printf("20BCS065   RAVI GOWRI JASWANTH\n\n");

    int box[] = {
        2, 5, 10, 20, 5, 20, 5, 4, 5, 10,
        4, 4, 20, 50, 5, 5, 5, 4, 5, 5,
        50, 5, 10, 10, 2, 10, 4, 2, 20, 50,
        4, 10, 10, 20, 50, 20, 10, 4, 5, 10,
        4, 4, 10, 5, 10, 5, 5, 4, 50, 20};

    int twoRupeeCoins = 0;
    int fiveRupeeCoin = 0;
    int tenRupeeCoins = 0;
    int twentyRupeeCoins = 0;
    int fiftyRupeeCoins = 0;

    for (int i = 0; i < 50; i++)
    {
        switch (box[i])
        {
        case 2:
            twoRupeeCoins++;
            break;
        case 5:
            fiveRupeeCoin++;
            break;
        case 10:
            tenRupeeCoins++;
            break;
        case 20:
            twentyRupeeCoins++;
            break;
        case 50:
            fiftyRupeeCoins++;
            break;
        }
    }
    printf("Box has:-\n");
    printf("BOX contains %d Two Rupee coins of value : %d \n\n", twoRupeeCoins,2*twoRupeeCoins);
    printf("BOX contains %d Five Rupee coins of value : %d\n\n", fiveRupeeCoin,5*fiveRupeeCoin);
    printf("BOX contains %d Ten Rupee coins of value : %d\n\n", tenRupeeCoins,10*tenRupeeCoins);
    printf("BOX contains %d Twenty Rupee coins of value : %d\n\n", twentyRupeeCoins,20*twentyRupeeCoins);
    printf("BOX contains %d Fifty Rupee coins of value : %d\n\n", fiftyRupeeCoins,50*fiftyRupeeCoins);

    printf("Total amount of coins in box is: ");
    printf("%d\n", twoRupeeCoins * 2 + fiveRupeeCoin * 5 + tenRupeeCoins * 10 + twentyRupeeCoins * 20 + fiftyRupeeCoins * 50);
}