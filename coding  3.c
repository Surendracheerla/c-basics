#include<stdio.h>
void main()
{
	float p, t, r, simpleinterest;
	printf("principal, time, interest");
	scanf("%f%f%f",&p,&t,&r);
	simpleinterest=(p*t*r)/100;
	printf("\nsimple interest when principal is %f time %f and rate of interest %f is %.2f",p, t, r, simpleinterest);
}
