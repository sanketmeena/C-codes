#include<stdio.h>
#include<stdlib.h>

void subset(int *arr,int n,int i,int *arr2,int k)
{
    if(k==1) arr2[i]=arr[i];
    if((n-1)== i)
    {
        for(int j=0; j<n; j++) printf("%d ",arr2[j]);
        printf("\n");
        
        // for(int j=0; j<n; j++) arr2[j]=0;
        return;
    }//printing arr2 aka subset
    
    
    subset(arr,n,i+1,arr2,0);
    subset(arr,n,i+1,arr2,1);
    arr2[i+1]=0;
}

void main()
{
    int arr[]={1,2,3};
    int n=3;
    int arr2[4];
    subset(arr,n,-1,arr2,0);
}
