// Your code here...
#include<stdio.h>
int main(){
    int N,T;
    int j,first;
    int count=0;
    scanf("%d",&N);
    
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        // if(arr[i]==T)
        // {
        //     count=count+1;
        // }

    }
    scanf("%d",&T);
    // printf("%d",count);
    for(j=0;j<N;j++)
    {
        if(arr[j]==T)
        {
            first=0;
            count+=1;
            first=j;
        }
    }
    // printf("%d",count);
    if(count>0){
        printf("%d",first);

    }
    else if(count==N)
    {
        printf("0");
    }
    else{
        
        // printf("%d",count);
        printf("%d",-1);
    }


}