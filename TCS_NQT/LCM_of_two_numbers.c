/*Program to find lcm of two numbers */

#include<stdio.h>
int gcd(int a,int b)
{
	int c;
    c=a%b;
    while(c!=0)
    {
    	a=b;
    	b=c;
    	c=a%b;
	}
	return b;
}
int main()
{
	int a,b,g,t,l,pro;
	scanf("%d%d",&a,&b);
	a>b?(a=a,b=b):(t=a,a=b,b=t);
	//printf("%d%d",a,b);
	g=gcd(a,b);
	pro=a*b;
	l=pro/g;
	printf("%d",l);
	
}
