// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int k=0;k<N;k++){
        scanf("%d",&arr[k]);
    }
    int max=arr[0], min;
    for(int i=0;i<N;i++){
        
        for(int j=i+1;j<N;j++){
            if (arr[i]>arr[j]){
                max=arr[i];
            
            }
            else{
                min=arr[i];
            }
        }
        
    }
    printf("%d %d",min,max);

}