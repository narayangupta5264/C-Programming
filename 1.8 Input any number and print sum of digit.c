#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,s=0;
	clrscr();
	printf("enter the any number: ");
	scanf("%d",&n);
	while(n>0)
	{
	a=n%10;
	s=s+a;
	n=n/10;
	}
	printf("The sum of given number is=%d",s);
	getch();
	}
