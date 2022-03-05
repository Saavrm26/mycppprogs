#include <stdio.h>

int main()
{
    int age, days;
    double principal, total, roi=0;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter princial value : ");
    scanf("%lf", &principal);
    printf("Enter the time period in days : ");
    scanf("%d", &days);
    int flag;

    if (age >= 60)
        flag = 1;
    else
        flag = 0;
    if (days >= 7 && days <= 45)
    {
        if (flag == 1)
            roi = 6.25;
        else
            roi = 5.75;
    }
    else if (days > 45 && days <= 180)
    {
        if (flag == 1)
            roi = 6.75;
        else
            roi = 6.25;
    }
    else if (days > 180 && days <= 210)
    {
        if (flag == 1)
            roi = 6.85;
        else
            roi = 6.35;
    }
    else if (days > 210 && days <= 365)
    {
        if (flag == 1)
            roi = 6.9;
        else
            roi = 6.4;
    }
    total = principal + (roi * ((double)days / (365.0 * 100.0))) * principal;
    printf("Your total balance is : %lf", total);
}
