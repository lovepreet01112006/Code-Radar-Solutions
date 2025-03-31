#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int minimum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }

    int maximum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }

    printf("%d %d",minimum,maximum);
    return 0;






}