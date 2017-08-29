#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the A,BandC\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("The number large numberis A");
}
else if(b>a && b>c)
{
printf("The number large numberis B");
}
else if(c>a && c>b)
{
printf("The number large numberis C");
}
else
{
printf("The number is illigal");
}
getch();
}
