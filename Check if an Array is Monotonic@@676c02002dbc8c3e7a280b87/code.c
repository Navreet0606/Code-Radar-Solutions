// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    if(arr[0]<arr[1])
    {
        for(int i=1;i<N;i++)
        {
            if(arr[i]<=arr[i+1])
            {
                c=0;
                // return c;
            }
            else
            {
                c=1;
                break;
            }
        }
    }
    else if(arr[0]>arr[1])
    {
        for(int i=1;i<N;i++)
        {
            
            if(arr[i]>=arr[i+1])
            {
                c=0;
                // return c;
            }
            else
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    

}