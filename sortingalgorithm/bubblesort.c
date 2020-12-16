#include <stdio.h>

void swaparr(int *p1,int *p2)
{
    int pot;
    pot=*p1;
    *p1=*p2;
    *p2=pot;
}

int bubblesort(int arr[],int n)
{
    int swap,i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swaparr(&arr[j],&arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter %i element: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    bubblesort(a,n);
    return 0;
}