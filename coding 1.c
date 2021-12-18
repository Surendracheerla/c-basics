#include<stdio.h>
void main()
{
	int l, b,area,perimeter;
	printf("Enter a number");
	scanf("%d%d", &l, &b);    
	area=l*b;
	printf("area of rectangle of length %d and breath %d is %d", l, b, area);
	perimeter=2*(l*b);
	printf("\nperimeter of a rectangle of length %d and breath %d is %d", l, b, perimeter);
	
}
