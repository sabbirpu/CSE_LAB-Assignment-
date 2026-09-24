

#include <stdio.h>

int main() {

    int Hours, Second, Minutes, Totalsecond;

    printf("Enter the value of Totalsecond: ");
    scanf("%d", &Totalsecond);

  Hours=Totalsecond/3600;
    Second=Totalsecond%3600;
    Minutes=Second/60;
    Second=Minutes/60;
    printf("Hours:%d\n",Hours);
    // printf("second:%d\n",Second);
     printf("Minutes:%d\n",Minutes);
     printf("second:%d",Second);
}
    
