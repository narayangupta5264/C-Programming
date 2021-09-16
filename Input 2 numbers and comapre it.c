#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter the first number =");
	scanf("%d",&a);
	printf("enter the second number =");
	scanf("%d",&b);
	if(a>b)
	 {
	 printf("a is max");
	 }
	    if(b>a)
	    {
	    printf("b is max");
	    }
	      if(a==b)
	      {
	      printf("Both numbers are equal");
	      }
	 getch();
	 }
