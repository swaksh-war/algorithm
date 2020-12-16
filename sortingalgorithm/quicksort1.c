#include <stdio.h>
void swaparr(int *p1,int *p2)
{
    int pot;
    pot=*p1;
    *p1=*p2;
    *p2=pot;
}
int partition(int arr[],int start,int end,int pivot)
{
    while(start<=end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<=end)
        {
            swaparr(&start,&end);
            start++;
            end--;
        }
    }
    return start;
}

void printarr(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
            printf("%d ",arr[i]);
    }
}

void quicksort(int arr[],int start, int end)
{
    int pivot=arr[(start+end)/2];
    int pivotposition=partition(arr,start,end,pivot);
    quicksort(arr,start,pivot);
    quicksort(arr,pivot+1,end);
    printarr(arr,end+1);
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
    printarr(arr,n);
    printf("\n\n");
    int size=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size);
    printarr(arr,n);
}