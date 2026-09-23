
#include <stdio.h>

int main() {
 float a,b,c,d,e,Total,result;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value if b:");
    scanf("%f",&b);
    printf("enter the value if c:");
    scanf("%f",&c);
     printf("enter the value if d:");
     scanf("%f",&d);
    
     printf("enter the value if e:");
     scanf("%f",&e);
    
    Total=a+b+c+d+e;
    printf("The sum of the value:%.2f\n",Total);
   result=(Total/500)*100;
    printf("The percentage of the result:%.2f%%",result);
    return 0;
}
