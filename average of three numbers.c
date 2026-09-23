
#include <stdio.h>

int main() {
 float a,b,c,sum,average;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value if b:");
    scanf("%f",&b);
    printf("enter the value if c:");
    scanf("%f",&c);
    sum=a+b+c;
    printf("The sum of the value:%.3f\n",sum);
    average=sum/3;
    printf("The average of the value:%.3f",average);
    return 0;
}
