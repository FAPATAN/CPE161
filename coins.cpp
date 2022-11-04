#include<stdio.h>
#include<conio.h>
main()
{
	int money,ten,five,one;
	printf("Enter your money :");
	scanf("%d",&money);
	ten = money /10;
	five = money %10/5;
	one = money %10%5%2;
	printf("ten coins = %d\n",ten);
	printf("five coins = %d\n",five);
	printf("one coins = %d\n",one);
	getch();
	return 0;
}
