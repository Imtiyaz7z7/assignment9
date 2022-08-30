#include<stdio.h>
int main(){
    int a;
    float b,c,d;
        printf("\nEnter the  electricity unit charges: ");
        scanf("\n%d",&a);
        switch (a){
        case 1 ... 50:
            b = 0.50*a;
            c = (20/b)*100;
            d = b+c;
            printf("%d",d);
            break;
        case 51 ... 151:
            b = 0.75*a;
            c = (20/b)*100;
            d = b+c;
            printf("%d",d);
            break;
        case 152 ... 250:
            b = 1.20*a;
            c = (20/b)*100;
            d = b+c;
            printf("%d",d);
            break;
        default:
            b = 1.50*a;
            c = (20/b)*100;
            d = b+c;
            printf("%d",d);
            break;
        }
   return 0;
}