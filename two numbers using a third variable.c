
#include <stdio.h>

int main() {
 int a,b,x;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value if b:");
    scanf("%d",&b);
   x=a;
    a=b;
    b=x;
   printf("after swaping:\n");
        printf("a=%d\n",a);
     printf("b=%d",b);
    
    return 0;
}
