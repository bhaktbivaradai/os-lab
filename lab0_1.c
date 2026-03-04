#include <stdio.h>
#include <limits.h>
int main()
{
    int a[100],n,i;
    int min=INT_MAX;
    int second=INT_MAX;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            second=min;
            min=a[i];
        }
        else if(a[i]<second&&a[i]!=min)
        {
            second=a[i];
        }
    }
    printf("Second smallest element = %d",second);

    return 0;
}
