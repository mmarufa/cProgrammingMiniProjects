#include <stdio.h>
#define usdToBdt 127
#define usdToRmb 6.67
float moneyCalculationRmbToBdt(float moneyAmountRmb)
{
    return (moneyAmountRmb/usdToRmb) * usdToBdt;
}
float moneyCalculationRmbToUsd(float moneyAmountRmb)
{
    return moneyAmountRmb/usdToRmb;
}
float moneyCalculationBdtToRmb(float moneyAmountBdt)
{
    return (moneyAmountBdt/usdToBdt)*usdToRmb;
}
float moneyCalculationBdtToUsd(float moneyAmountBdt)
{
    return moneyAmountBdt/usdToBdt;
}
float moneyCalculationUsdToRmb(float moneyAmountUsd)
{
    return moneyAmountUsd*usdToRmb;
}
float moneyCalculationUsdToBdt(float moneyAmountUsd)
{
    return moneyAmountUsd*usdToBdt;
}
int main()
{
    float moneyAmountRmb, moneyAmountBdt, moneyAmountUsd;
    int currentCurrency, nextCurrency;
    // float rmbToBdt = 19.08;
    printf("Which currency do you want to convert?\n");
    printf("1.Rmb, 2.Bdt, 3.Usd \n");
    scanf("%d", &currentCurrency);
    printf("To which currency?\n");
    printf("1.Rmb, 2.Bdt, 3.Usd \n");
    scanf("%d", &nextCurrency);

    if(currentCurrency == 1 && nextCurrency == 2)
    {
    printf("Enter the amount(RMB) : ");
    scanf("%f", &moneyAmountRmb);
    printf("In bdt %.2f Tk.\n", moneyCalculationRmbToBdt(moneyAmountRmb));
    }
    else if(currentCurrency == 1 && nextCurrency == 3)
    {
    printf("Enter the amount(RMB) : ");
    scanf("%f", &moneyAmountRmb);
    printf("In Usd %.2f dollar.\n", moneyCalculationRmbToUsd(moneyAmountRmb));
    }
    else if( currentCurrency == 2 && nextCurrency == 1)
    {
    printf("Enter the amount(BDT) : ");
    scanf("%f", &moneyAmountBdt);
    printf("In Rmb %.2f Yuan.", moneyCalculationBdtToRmb(moneyAmountBdt));
    }
    else if( currentCurrency == 2 && nextCurrency == 3)
    {
    printf("Enter the amount(BDT) : ");
    scanf("%f", &moneyAmountBdt);
    printf("In Usd %.2f dollar.", moneyCalculationBdtToUsd(moneyAmountBdt));
    }
    else if( currentCurrency == 3 && nextCurrency == 1)
    {
    printf("Enter the amount(USD) : ");
    scanf("%f", &moneyAmountUsd);
    printf("In Rmb %.2f Yuan.", moneyCalculationUsdToRmb(moneyAmountUsd));
    }
    else if( currentCurrency == 3 && nextCurrency == 2)
    {
    printf("Enter the amount(USD) : ");
    scanf("%f", &moneyAmountUsd);
    printf("In Bdt %.2f Tk.", moneyCalculationUsdToBdt(moneyAmountUsd));
    }
    else
    {
    printf("Entered wrong conversion.");
    }
    return 0;
}

