#include<stdio.h>
#include<conio.h>
void main()
{
	int choose,num1,num2;
	printf("simple calculator\n");
	printf("1.additation\n");
	printf("2.substration\n");
	printf("3.multplication\n");
	printf("4.division\n");
	printf("enter a chooise:");
	scanf("%d",choose);
	printf("enter num1:");
	scanf("%d",&num1);
		printf("enter num2:");
	scanf("%d",&num2);
	switch(choose)
	{
	case 1:printf("Result:%d\n",num1+num2);
	break;
	
	case 2:printf("Result:%d\n",num1-num2);
	break;
	
	case 3:printf("Result:%d\n",num1*num2);
	break;
	
	case 4:printf("Result:%d\n",num1/num2);
	break;
	
	default:printf("enter vailed chooise!");
}
}