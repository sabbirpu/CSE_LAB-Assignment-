#include <stdio.h>
int main() {

    float length,width,result;
    printf("Enter the value of length:");
    scanf("%f",&length);
    printf("Enter the value of width:");
    scanf("%f",&width);
    result=2*(length+width);
    printf("The  perimeter of a rectangle value is:%.2f",result);
}
