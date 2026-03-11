#include <stdio.h>
int main()
{
    int a[100],n,i;
    int largest,second_largest;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    largest=second_largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second_largest=largest;
            largest=a[i];
        }
        else if(a[i]>second_largest&&a[i]!=largest)
        {
            second_largest=a[i];
        }
    }

    printf("Second largest element = %d",second_largest);
    return 0;
}
