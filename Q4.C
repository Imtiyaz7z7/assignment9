#include<stdio.h>
int main(){
    int x,y,z;
    int a;
    while (1)
    {
    // a. Check whether a given set of three numbers are lengths of an
    // isosceles triangle or not
    // b. Check whether a given set of three numbers are lengths of sides of
    // a right angled triangle or not
    // c. Check whether a given set of three numbers are equilateral triangle
    // or not
    // d. Exit
        printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
        printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
        printf("\n4. Exit");
        printf("\nSelect an option: ");
        scanf("\n%d",&a);
        switch (a)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            printf("Enter a number: ");
            scanf("%d",&z);
            if(x=y||y==z||z==x)
                printf("The given triangle is an isosceles triangle");
            else
                printf("The given triangle is not an isosceles triangle");
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            printf("Enter a number: ");
            scanf("%d",&z);
            if((x*x)+(y*y)==(z*z)||(x*x)+(z*z)==(y*y)||(z*z)+(y*y)==(x*x))
                printf("The given triangle is right angle triangle");
            else
                printf("The given triangle is not a right angle triangle");
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            printf("Enter a number: ");
            scanf("%d",&z);
            if((x==y)&&(y==z))
                printf("The given triangle is an equilateral triangle");
            else
                printf("The given triangle is not an equilateral triangle");
            break;
        case 4:
            break;
        default:
            printf("Invalid number");
            break;
        }
        if (a==4)
        {
            break;
        }
    }
   return 0;
}