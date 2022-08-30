#include<stdio.h>
int main(){
    int a;
    while (1)
    {
        printf("\n01.January");
        printf("\n02.Februry");
        printf("\n03.March");
        printf("\n04.April");
        printf("\n05.May");
        printf("\n06.June");
        printf("\n07.July");
        printf("\n08.August");
        printf("\n09.September");
        printf("\n10.October");
        printf("\n11.November");
        printf("\n12.December");
        printf("\n13.Exit");
        printf("\nPickUp any month number: ");
        scanf("\n%d",&a);
        switch (a)
        {
        case 1:
            printf("January = 31 days");
            break;
        case 2:
            printf("Februry = 28 days");
            break;
        case 3:
            printf("March = 31 days");
            break;
        case 4:
            printf("April = 30 days");
            break;
        case 5:
            printf("May = 31 days");
            break;
        case 6:
            printf("June = 30 days");
            break;
        case 7:
            printf("July = 31 days");
            break;
        case 8:
            printf("August = 31 days");
            break;
        case 9:
            printf("September = 30 days");
            break;
        case 10:
            printf("October = 31 days");
            break;
        case 11:
            printf("November = 30 days");
            break;
        case 12:
            printf("December = 31 days");
            break;
        case 13:
            break;
        default:
            printf("Invalid number");
            break;
        }
        if (a==10)
        {
            break;
        }
    }
   return 0;
}