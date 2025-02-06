#include <stdio.h>
int main(){
    int x;
    scanf("%d,&x");
    int sum;
    for(int y=1;y<=x;y++){
        sum += x;
    }
    printf("%d",sum);
    return 0;
}