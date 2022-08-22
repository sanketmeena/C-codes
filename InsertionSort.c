#include<stdio.h>
void printArr(int *A,int n)
{
    for(int i=0; i<n; i++)
        printf("%d ",A[i]);

    printf("\n");
}
void inertionSort(int *A,int n)
{
    for(int i=1; i<n; i++)
    {
        int key=A[i];
        int j=i-1;
        while((A[j] > key) && j>=0)
        {
            A[j+1]=A[j];
            j--; //as here, we have decreased the j, that's why we are increasing the j in next statement
        }
        A[j+1]=key;
    }
    printArr(A,n);
}
void main()
{
    int A[]={8,5,2,4,6,7,3};
    int n=7;
    printArr(A,n); //Before sorting
    inertionSort(A,n);//After sorting
}
