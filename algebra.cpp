#include<stdio.h>
#include<conio.h>
main()
{
	float x=37, y=10, z=5;
	int ten,five,coin;
	ten = (int)x/(int)y;
	five = (int)x%(int)y/(int)z;
	coin = (int)x%(int)z;
	printf("All change of %f\n",x);
	printf("Number of Ten Bath is %d coins. \n",ten);
	printf("Number of Five Bath is %d coins. \n",five);
	printf("Number of coin Bath is %d coins. \n",coin);
	getch();
	return 0;
}
