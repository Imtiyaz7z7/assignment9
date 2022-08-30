#include<stdio.h>
int main(){
    int a,b;
        printf("\nEnter the year: ");
        scanf("\n%d",&a);
        b = a%4==0?1:a%100==0?1:a%400==0?1:2;
        switch (b){
        case 1:
            printf("Leap year");
            break;
        case 2:
            printf("Not a Leap year");
            break;
        default:
            printf("Invalid number");
            break;
        }
   return 0;
}