#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	printf("enter the value of d");
	scanf("%d",&d);
	printf("enter the value of e");
	scanf("%d",&e);
	if(a<b)
	{
		printf("a is the smallest %d",a);
	}
	else if(b<c)
	{
		printf("b is the smallest %d",b);
	}
	else if(c<d)
	{
		printf("c is the smallest %d",c);
	}
	else if(d<e)
	{
		printf("d is the smallest %d",d);
	}
	else
	{
		printf("e is the smallest %d",e);
	}

	getch();
}