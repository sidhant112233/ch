

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;

	clrscr();
	printf("Enter a value n :");
	scanf("%d",&i);
	printf("Enter a value i :");
	scanf("%d",&n);

	do{
		if(i%2==0)
		{
		printf("%d\t",i);
		}

		i--;

	  } while(i>=n);
	  getch();
	  }