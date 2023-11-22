#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	if(a>b)
	{
		printf("a is the greatest %d",a);
	}
	else if(b>c)
	{
		printf("b is the greatest %d",b);
	}
	else
	{
		printf("c is the greatest %d",c);
	}
	getch();
}