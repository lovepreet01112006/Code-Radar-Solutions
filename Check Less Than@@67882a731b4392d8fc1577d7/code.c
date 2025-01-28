#include <stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d",&x,&y);
    if(x<y){
        printf("True");
    }
    else if(x>y){
        printf("False");
    }
    else{
        printf("Not Determied");
    }
    return 0;
}