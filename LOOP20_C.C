	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a=1,b;
	clrscr();
	printf("Enter value foe multiplication table");
	scanf("%d",&b);

	for(a;a<=b;a++)
	{
	  printf("%d*%d=%d \n",b,a,a*b);
	}
	getch();
}