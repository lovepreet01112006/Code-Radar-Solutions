#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int isprime = 1;
    if(n<=1){
        isprime=0;
    }
    else{
        for(int i=2; i<n ;i++){
            if(n%i==0){
                isprime=0;
                break;
            }

        }
    
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}