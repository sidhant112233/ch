#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter a value of n:");
	scanf("%d",&n);

	for(i;i<=n;i++)
	sum=sum+i;
	{
		printf("enter value sum=%d \t",sum);
	}
	getch();
}