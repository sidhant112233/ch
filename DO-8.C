
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,sum=0;
	clrscr();
	printf("Enter value of n :");
	scanf("%d",&n);
	do{
		sum=sum+i;
		i++;

	  }while(i<=n);
	  printf("Enter value sum=%d",sum);
	  getch();
}
