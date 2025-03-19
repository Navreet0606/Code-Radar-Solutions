// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int nav[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N;j++){
        for(int k=j+1;k<N-j,k++){
            if(arr[j]>=arr[k]||j=N)
            {
                nav[j]=arr[j]
            }
            else
            {
                continue;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",nav[i]);
    }
}