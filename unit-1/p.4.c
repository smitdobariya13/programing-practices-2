//Enter N elements and find how many are positive, negative, even and odd.

#include<stdio.h>

int main()
{
    int n;
    int possitive =0,negative=0;
    int even =0,odd=0;
    printf("enter no of array elements here :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements here:");
    for (int i=0;i<n;i++)
    {
        printf ("number %d:",i+1);
        scanf("%d",&arr[i]);

        if(arr[i]>0)
        {
            possitive++;
        }
        else if (arr[i]<0)
        {
            negative++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nResults:\n");
    printf("Positive numbers : %d\n",possitive);
    printf("negative numbers : %d\n",negative);
    printf("even numbers     : %d\n",even);
    printf("odd numbers      : %d\n",odd);

    printf("Total numbers    : %d\n",n);
}
