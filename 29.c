#include<stdio.h>
int main()
{
    int min,hr,b;
    printf("Enter the element:");
    scanf("%d",&min);
    hr=min/60;
    b=min-(hr*60);
    printf("\nHOUR is:%d.%d",hr,b);
}
