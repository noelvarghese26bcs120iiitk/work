//midsem sem1 Q6
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vehicle,rpk;
    float dist,discount,Discount,ffare,bfare;
    char passenger;
    printf("Passenger type:\nA-Regular   B-Student   C-Senior\n\nVehicle Category:\n1-Mini   2-Sedan   3-SUV\n\n");
    printf("Enter passenger type: ");
    scanf(" %c",&passenger);
    switch (passenger)
    {
        case A:
        case a:
        discount=0;
        case B:
        case b:
        discount=0.10;
        case C:
        case c:
        discount=0.15;
        default:
        printf("Invalid Passenger type.");
        exit(0);
    }
    printf("Enter Vehicle Category: ");
    scanf("%d",&vehicle);
    switch (vehicle)
    {
        case 1:
        if (dist<=10)
        rpk=12;
        else if (dist<=30)
        rpk=10;
        else if (dist>30)
        rpk=8;
        case 2:
        if (dist<=10)
        rpk=15;
        else if (dist<=30)
        rpk=13;
        else if (dist>30)
        rpk=11;
        case 3:
        if (dist<=10)
        rpk=20;
        else if (dist<=30)
        rpk=18;
        else if (dist>30)
        rpk=15;
        default:
        printf("Invalid Vehicle Category.");
        exit(0);
    }
    bfare=rpk*dist;
    Discount=bfare*discount;
    ffare=bfare-Discount;
    printf("Vehicle Type: ");
    if (vehicle==1)
    return 0;
}