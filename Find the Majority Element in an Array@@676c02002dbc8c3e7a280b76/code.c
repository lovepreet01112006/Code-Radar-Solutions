#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max = 0;
    int max_element = arr[0];
    int all_same = 1;

    
    for(int i=0;i<n;i++){
        int count =1;
       
        if(arr[i] == -1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            count ++;
            arr[j]=-1;
        }

        if(count>max){
            max_element = arr[i];
            all_same = 0;
        }

        else if(count == max){
            all_same = 1;
        }

        
      }

    if(all_same){
        printf("-1");
    }
    else{
        printf("%d",max_element)
    }







    return 0;
}