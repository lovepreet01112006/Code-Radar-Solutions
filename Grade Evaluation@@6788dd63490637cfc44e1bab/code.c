#include <stdio.h>
int main(){
    char x;
    scanf("%c",&c);
    if(x=='A'){
        printf("Excellent");
    }
    else if(x=='B'){
        printf("Good");
    }
    else if(x=='C'){
        printf("Average");
    }
    else if(x=='D'){
        printf("Below Average");
    }
    else if(x=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid Grade");
    }
    return 0;
}