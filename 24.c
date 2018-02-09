#include<stdio.h>
int main()
{
int a,temp;
int a1[a];
printf("Enter the value");
scanf("%d",&a);
for(int i=0;i<=a;i++)
{
scanf("%d",&a1[i]);
}
for(int i=0;i<a;i++)
{
for(int j=i+1;j<a;j++)
{if(a1[j]<a1[i])
{
temp=a1[i];
a1[i]=a1[j];
a1[j]=temp;
}
}
printf("%d",a1[i]);
}
return 0;
}
