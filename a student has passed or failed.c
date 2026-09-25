#include <stdio.h>

int main() {

    int mark;
    printf("enter the student mark :");
    scanf("%d",&mark);
    if(mark>=33){
        printf("congratulation you are passed");
    }
    else {
        printf("sorry to say you are failed");
    }
}
