#include <stdio.h>
int main(){
    int x,yy,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x+y>c) && (x==y==z)){
        printf("Equilateral");
    }
    else if(x+y>c && (x==y || y==c || x==c)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}