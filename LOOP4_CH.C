#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	printf("Enter value of i :");
	scanf("%d",&i);
	printf("Enter value of n :");
	scanf("%d",&n);
	do{
		printf("%d\t",i);
		i--;
	}while(i>=n);
	getch();
	}
