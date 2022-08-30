#include<stdio.h>
int main(){
        int a;
            printf("\n1. Monday"); 
            printf("\n2. Tuesday");
            printf("\n3. Wednesday");
            printf("\n4. Thursday");
            printf("\n5. Friday");
            printf("\n6. Saturday");
            printf("\n7. Sunday");
            printf("\n8. Exit");
            printf("\nSelect an option: ");
            scanf("\n%d",&a);
            switch (a)
            {
            case 1:
                printf("\nHappy Monday\nHave beautiful day and a wonderful week..");
                break;
            case 2:
                printf("\nHappy tuesday\nMay your day be filled with\npositive things & Allah's blessings..");
                break;
            case 3:
                printf("Happy wednesday\nStart your day with a smile on\nyour face and make it fruitful..");
                break;
            case 4:
                printf("Happy Thursday\nStart your day with a smile on\nyour face and make it fruitful..");   
                break;
            case 5:
                printf("Happy Friday\nStart your day with a smile on\nyour face and make it fruitful..");
                break;
            case 6:
                printf("Happy Saturday\nSaturday is a filling int the sandwich\ncalled weekend..");
                break;
            case 7:
                printf("Happy Sunday\nMay this Sunday brings all the good things in your life..");
                break;
            case 8:
                break;
            default:
                printf("Invalid number");
                break;
            }
   return 0;
}