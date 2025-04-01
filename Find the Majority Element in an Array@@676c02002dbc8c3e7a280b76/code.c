#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    for(int i=0;i<n;i++){
        int count =1;
        int max = 0;
        int max_element = arr[i];
        if(arr[i] == -1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            count ++;
            arr[j]=-1;
        }

        if(count>max){
            max_element = arr[i];
            printf("%d",arr[i]);
        }
        








    }
    return 0;
}