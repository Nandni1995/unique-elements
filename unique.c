#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],b,d;
clrscr();
printf("enter the number:");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
d=0;
for(j=0;j<b;j++)
{
if(a[i]==a[j])
d++;
}
if(d==1)
printf("%d",a[i]);
break;
}
getch();
}
