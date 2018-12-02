#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int arr[], int n)
{
    int i, j, val;
    for(i=1; i<n; i++)
    {
        val= arr[i];
        j= i-1;
        while(j>=0 && arr[j] > val)
        {
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]= val;
    }
    return arr;
}

int main()
{
    int *arr;
    int n, i;
    printf("\nEnter the size of the array:- ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("\nEnter the array to be sorted:- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr = insertion_sort(arr, n);
    printf("\nAfter sorting :-\n ");
    for(i=0; i<n; i++)
        printf("%d\t", arr[i]);

        printf("\n");
}
