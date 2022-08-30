#include<stdio.h>
int main(){
        int a;
            printf("\nSelect an option: ");
            scanf("\n%d",&a);
            switch (a)
            {
            case 1:
                printf("good");
                break;
            case 2:
                printf("better");
                break;
            case 3:
                printf("best");
                break;
            default:
                printf("Invalid number");
                break;
            }
   return 0;
}