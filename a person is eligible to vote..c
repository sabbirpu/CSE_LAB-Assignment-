#include <stdio.h>

int main() {

    int year;
    printf("enter the year :");
    scanf("%d",&year);
    if(year>=18){
        printf("congratulation you are eligible for vote");
    }
    else {
        printf("you are not eligible for vote ");
    }
}

