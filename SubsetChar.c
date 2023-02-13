#include<stdio.h>
#include<stdlib.h>

void subset(char *arr,int n,int i,char *arr2)
{
    //printing arr2 aka subset
    if((n-1)== i)
    {
        for(int j=0; j<n; j++) printf("%c",arr2[j]);
        printf("\n");
        
        return;
    }
    
    
    subset(arr,n,i+1,arr2); //Not included
    arr2[i+1]=arr[i+1];     //Copy to new string
    subset(arr,n,i+1,arr2); //include
    arr2[i+1]=0;            //Backtrack
}

void main()
{
    char arr[]="abc";
    int n=3;
    char arr2[4];
    subset(arr,n,-1,arr2);
}
