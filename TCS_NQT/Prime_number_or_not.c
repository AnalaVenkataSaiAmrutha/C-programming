/*Program to find given number is prime or not */

#include<stdio.h>
int prime(int n)
{
	int i,fc=0;
	if(n==1 || n==0)
	 return 1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			fc++;
			break;
		}
		  
	}
	return fc;
	
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=prime(n);
	if(res==0)
	  printf("Prime number");
	else
	  printf("Not a prime number");
}
