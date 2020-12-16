#include <stdio.h>

void swapele(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int parting(int arr[], int start,int end)
{
    int i=start+1;
    int piv=arr[start];
    for(int j=start+1;j<=end;j++)
    {
        if(arr[j]<piv)
        {
            swapele(&arr[i],&arr[j]); //5 lower arr [1 3 2 4] high arr [6,7,9]
            i++;
        }
    }
    swapele(&arr[start],&arr[i-1]);
    return start;
}
void quicksort(int arr[], int start,int end)
{
    if(start<end)
    {
        int x=parting(arr,start,end);
        quicksort(arr,start,x-1);
        quicksort(arr,x+1,end);
    }
}

void printarr(int arr[], int size)
{
    for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d no.: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    int size=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size-1);
    printarr(arr,size);
}