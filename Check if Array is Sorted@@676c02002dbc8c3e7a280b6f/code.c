// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            break;
        }
        else
        {
            printf("Sorted");
            break;
        }
    }
}