// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<N;i++){
        for(int a=0;a<N;a++)
        {
            if(arr[i]==arr[a])
            {
                j+=1;
            }
            else
            {
                continue;
            }
            printf("%d %d\n",arr[i],j);
        }
    }


}