/*Factorial of a given number */
#include<stdio.h>
int factorial(int n)
{
	int pro=1,i;
	for(i=1;i<=n;i++)
	{
		pro=pro*i;
	}
	return pro;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=factorial(n);
	printf("%d",res);
}
