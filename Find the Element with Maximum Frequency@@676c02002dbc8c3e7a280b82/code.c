#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max_freq=0;
    int max_element=arr[0];
    for(int i=0;i<N;i++){
        int count=1;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count+=1;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1 && count>max_freq){
           max_freq=count;
           max_element=arr[i];
        }
    }
    printf("%d",max_element);
    return 0;
}