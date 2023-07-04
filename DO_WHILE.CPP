#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter a value of n :");
	scanf("%d",&n);
	do{
		printf("%d\t",i);
		i++;

	  }while(i<=n);
	  getch();
}
