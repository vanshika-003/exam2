#include<conio.h>
void main()
{
float height,width,perimeter;

printf("enter the height of the rectangle:");
scanf("%f",&height);

printf("enter the width of the rectangle:");
scanf("%f",&width);

perimeter=2*(height+width);
printf("the perimeter of the rectangle is :%f\n",perimeter);	
}