#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	printf("Enter n :");
	scanf("%d",&n);
	
	int sum =1;
	for (i=1; i<=n; i++)
	{ 
	  sum *=i;
	}
	printf("Factorial %d! = %d\n",n,sum);
	getch();
	return 0;
}
