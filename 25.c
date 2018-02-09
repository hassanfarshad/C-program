#include<stdio.h>
int main()
{
int a,temp,m;
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
for(i=0;i<a;i++)
{
printf("\n%d",a1[i]);
}
m=a/2;
for(i=0;i<2;i++)
{
if(i==m)
printf("\n%d",a1[m]);
}
return 0;
}
}
