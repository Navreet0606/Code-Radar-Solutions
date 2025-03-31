// Your code here...
#include<stdio.h>
int main(){
    int N,index,j;
    scanf("%d",&N);
    int arr[N];
    arr[index]=0;
        for(int i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(j=0;j<N;j++){
            if(arr[j]>arr[j+1])
            {
                arr[index]=arr[j];

            }
            // printf("%d ",arr[j]);
            

        }
        printf("%d",arr[j]);
        
        
        
    }
