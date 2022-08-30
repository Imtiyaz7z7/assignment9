#include<stdio.h>
int main(){
    int x,y,z;
    int a;
    while (1)
    {
        printf("\n1. Addition");
        printf("\n2. Substraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\nSelect an option: ");
        scanf("\n%d",&a);
        switch (a)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            z = x+y;
            printf("The addition of %d + %d = %d",x,y,z);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            z = x-y;
            printf("The substraction of %d - %d = %d",x,y,z);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            z = x*y;
            printf("The Multiplication of %d * %d = %d",x,y,z);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d",&x);
            printf("Enter a number: ");
            scanf("%d",&y);
            z = x/y;
            printf("The Division of %d/%d = %d",x,y,z);
            break;
        case 5:
            break;
        default:
            printf("Invalid number");
            break;
        }
        if (a==5)
        {
            break;
        }
    }
   return 0;
}