

#include <stdio.h>

int main() {

   int mark;
    printf("enter your mark ;");
    scanf("%d",&mark);
    if(mark>=80){
        printf("grade= A+");
    }
    else if (mark>=70){
      printf("grade=A");   
    }
    else if (mark>=60){
        printf("grade=A-");
    }
    else if (mark>=50){
        printf("grade=b");

    }
    else if (mark>=40){
        printf("grade = c");
    }
    else  {
        printf("grade=F");
    }
    


       
}
