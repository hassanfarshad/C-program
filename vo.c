#include<stdio.h>
#include<conio.h>
void main()
{
char n;
printf("Enter the Characters");
scanf(%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
{
printf("the Character is vowels %c",n);
}
else
{
printf("the Character is NOTvowels %c",n);
}
getch();
}
