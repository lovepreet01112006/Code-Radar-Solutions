#include <stdio.h>

int main(){
    int notprime = 0;
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            notprime=1;
        }
        
    }
    if(notprime){
        printf("Not Prime",n);
    }
    else{
        printf("Prime",n);
    }
    return 0;
}