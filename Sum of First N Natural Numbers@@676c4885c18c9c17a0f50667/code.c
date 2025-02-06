#include <stdio.h>
int main(){
    int x;
    scanf("%d,&x");
    int sum;
    for(int y=1;y<=x;y++){
        sum += y;
    }
    printf("%d",sum);
    return ;
}