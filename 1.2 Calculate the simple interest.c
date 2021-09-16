#include<stdio.h>
#include<conio.h>
	void main()
	{
	float si,p,r,t;
	clrscr();
	printf("enter the value of principle =");
	scanf("%f",&p);
	printf("enter the value of rate =");
	scanf("%f",&r);
	printf("enter the value of time =");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("the simple interest =%f",si);
	getch();
	}
