#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        int count=1;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1){
            printf("%d %d\n",arr[i],count);
        }
    }
    return 0;
}