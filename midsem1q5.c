//midsem Sem 1, Q4
#include<stdio.h>
int main()
{
    int ndays,nmday,i,j;
    do
    {
        printf("Enter number of days in the month: ");
        scanf("%d",&ndays);
        printf("Enter starting day of the week(1=Sun, 7=Sat): ");
        scanf("%d",&nmday);
    }while ((ndays<28 || ndays>31)||(nmday>7 || nmday<1));
    printf("Sun\tMon\tTue\tWen\tThu\tFri\tSat\n");
    for (i=0;i<nmday;i++)
    printf("   \t");
    for (i=0;i<ndays;i++)
    {
        if ((nmday+i)%7==0)
        printf("\n");
        printf(" %d \t",i+1);
    }
    return 0;
}