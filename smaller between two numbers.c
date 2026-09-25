#include <stdio.h>

int main() {

    int a,b;
    printf("enter the number a : ");
    scanf("%d",&a);
    printf("enter the number b : ");
    scanf("%d",&b);
    
    if(a<b){
        printf("%d is smaller",a);
    }
        else if(a>b){
                printf("%d is smaller",b);
    
        }
    else{
        printf("the number is equel");
    }
    
}
