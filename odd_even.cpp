#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("_____________________________________________________\n");
	if(num == 0)
	{
		printf("%d is zero",num);
	}
	else if(num%2 == 0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
	getch();
} 
