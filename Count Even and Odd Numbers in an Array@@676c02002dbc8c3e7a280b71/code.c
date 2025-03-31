#include <stdio.h>

int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    int count_even = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even ++;
        }
    }

    int count_odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count_odd ++;
        }
    }

    printf("%d %d",count_even,count_odd);
    
    return 0;
}