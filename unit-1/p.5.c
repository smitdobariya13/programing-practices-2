//Copy the elements of one array into another.

#include<stdio.h>

int main()

{
    int n;
    printf("enter no. of array elements here : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d array elements here :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("enter %dth elements here:",i+1);
        scanf("%d",&arr[i]);
    }
    int arrcpy[n];
    for(int i=0;i<n;i++)
    {
        arrcpy[i]=arr[i];
    }
    printf("\n original array : ");
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n copy array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arrcpy[i]);
    }
    return 0;
}
