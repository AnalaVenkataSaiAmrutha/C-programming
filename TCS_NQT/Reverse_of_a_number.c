/*Program used to print reverse of a number */
#include<stdio.h>
int reverse(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n,rev;
	scanf("%d",&n);
	rev=reverse(n);
	printf("%d",rev);
}
