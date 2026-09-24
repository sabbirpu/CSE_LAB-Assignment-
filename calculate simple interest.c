

#include <stdio.h>

int main() {

    float P,R,T,SI;
    printf("Enter the value of principal:");
    scanf("%d",&P);
    printf("Enter the value of Rate:");
    scanf("%d",&R);
    printf("Enter the  value of Time:");
    scanf("%d",&T);
    SI=P*R*T/100;
    printf("The value of simple interest:%.3f",SI);
}
