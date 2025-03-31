// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int k=0;k<N;k++){
        scanf("%d",&arr[k]);
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<N;i++){
        
        if (arr[i]>max)
        {
            max=arr[i];
        
        }
        
    }
    for(int i=0;i<N;i++){
        
        if (arr[i]<min)
        {
            min=arr[i];
        
        }
        
    }

    printf("%d %d",min,max);

}