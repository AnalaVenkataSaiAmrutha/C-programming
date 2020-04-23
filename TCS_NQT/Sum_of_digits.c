/*Program to find sum of the digits of given number */
#include<stdio.h>
int sum_of_digits(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=sum_of_digits(n);
	printf("%d",res);
}
