#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("\nOUTPUT is:\n%d\t%d",a[i],i);
    }
   return 0;
}
