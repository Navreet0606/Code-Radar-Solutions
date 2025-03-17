// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<N;i++){
        int j=0;
        for(int a=0;a<N-a;a++)
        {
            if(arr[i]==arr[a])
            {
                j+=1;
            }
            else
            {
                continue;
            }
            
        }
        printf("%d %d\n",arr[i],j);
    }


}