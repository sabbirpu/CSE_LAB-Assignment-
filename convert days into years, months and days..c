#include <stdio.h>

int main() {

     int year,month,day,totaldays;
           printf("enter totaldays:");
      scanf("%d",&totaldays);
          year=totaldays/365;
             day=totaldays%365;
                 month=day/30;
      day=day%30;
          printf("year:%d\n",year);
    
               printf("month:%d\n",month);
    
                     printf("day:%d",day);
} 
