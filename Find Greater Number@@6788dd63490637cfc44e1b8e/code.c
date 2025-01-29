#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d",a);
    }
    else if(b>a){
        printf("%d",b);
    }
    else{
        printf("Both are equal");
    }return 0;
}