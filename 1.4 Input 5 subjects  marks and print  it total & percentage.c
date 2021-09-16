#include<stdio.h>
#include<conio.h>
void main()
{
	float h,e,m,p,c,t,per;
	clrscr();
	printf("enter the markes of hindi =");
	scanf("%f",&h);

	printf("enter the markes of english =");
	scanf("%f",&m);

	printf("enter the markes of math =");
	scanf("%f",&m);

	printf("enter the markes of physics =");
	scanf("%f",&p);

	printf("enter the markes of chemistry =");
	scanf("%f",&c);
	t = h+e+m+p+c;
	per=(t*100)/500;
	printf("\nThe total markes is =%f",t);
	printf("\nThe total percentage is =%f",per);
	getch();
	}
