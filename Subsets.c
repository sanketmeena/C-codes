#include<stdio.h>
#include<stdlib.h>

void subset(int *arr,int n,int i,int *arr2)
{
    //printing arr2 aka subset
    if((n-1)== i)
    {
        for(int j=0; j<n; j++) printf("%d ",arr2[j]);
        printf("\n");
        
        return;
    }
    
    
    subset(arr,n,i+1,arr2); //Not include
    arr2[i+1]=arr[i+1];     //Copy to new array
    subset(arr,n,i+1,arr2); //include
    arr2[i+1]=0;            //Backtrack
}

void main()
{
    int arr[]={1,2,3,4};
    int n=4;
    int arr2[4];
    subset(arr,n,-1,arr2);
}
