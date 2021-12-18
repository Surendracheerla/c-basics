#include<stdio.h>
void main()
{
	float r, area, circumference;
	float pi = 3.14;
	printf("Enter a number");
	scanf("%f",&r);
	area = 3.14*r*r;
	printf("area of a circle of radious %f is %f", r, area);
	circumference = 2*3.14*r;
	printf("circumference of a circle of radius %f is %f",r, circumference);
}
