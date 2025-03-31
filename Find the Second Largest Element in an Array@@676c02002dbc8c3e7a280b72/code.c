// Your code here...
#include<stdio.h>
int main(){
    int N,index;
    scanf("%d",&N);
    int arr[N];
    arr[index]=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<N;j++){
            if(arr[j]>arr[j+1]){
                arr[index]=arr[j];

            }
            printf("%d",arr[j]);

        }
        
        
    }
}