/*Program to find whether given year is leap year or not */

#include<stdio.h>
int leap_year(int n)
{
	if(n%100==0 && n%400==0)
	 return 1;
	else if(n%4==0 && n%100!=0)
	 return 1;
	else
	 return 0;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=leap_year(n);
	if(res==1)
	  printf("Leap year");
	else
	  printf("Not a leap year");
}
