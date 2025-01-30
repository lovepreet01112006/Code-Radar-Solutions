#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((x%x==0 && x%1==0) && (x>0)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}