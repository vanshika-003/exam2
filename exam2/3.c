#include<conio.h>
void main()
{
char ch;
printf("enter a charceter:");
scanf("%c",&ch);
if ((ch>='a' && ch <='z')||(ch>='a' && ch <='z'))
{
	printf("%c is an alphabet\n",ch);
	
}
else 
{
	printf("%c is a spical charceter\n",ch);
}

}