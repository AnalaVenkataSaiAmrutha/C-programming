/*Program to find sum of first n natural numbers*/
#include<stdio.h>
int sum_of_first_n_numbers(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=sum_of_first_n_numbers(n);
	printf("%d",res);
}
