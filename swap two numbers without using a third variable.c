
#include <stdio.h>

int main() {
 int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value if b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
        a=a-b;
    printf("after swaping:\n");
        printf("a=%d\n",a);
     printf("b=%d",b);
    
    return 0;
}
