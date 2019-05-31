//6) Delete an element from an array at specified position
#include <stdio.h>

int main()
{
    int arr[100];
    int i, n, pos;

    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n)
    {
        printf("wrong input");
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    printf("\nElements of array after delete are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
