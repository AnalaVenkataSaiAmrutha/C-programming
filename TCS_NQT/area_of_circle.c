/*Program to find area of circle when radius given */

#include<stdio.h>
#define pi 3.14
float area(float r)
{
	return pi*r*r;
}
int main()
{
	float r,a;
	scanf("%f",&r);
	a=area(r);
	printf("%f",a);
	return 0;
}
