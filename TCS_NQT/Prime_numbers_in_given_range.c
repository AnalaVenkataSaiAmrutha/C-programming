/*Program to find the prime numbers in the given range*/

#include<stdio.h>
int prime(int n)
{
	int i,fc=0;
	if(n==1)
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
	int l,h,fc,i;
	scanf("%d%d",&l,&h);
	for(i=l;i<=h;i++)
	{

		fc=prime(i);
		if(fc==0)
		  printf("%d ",i);
	
   }
}
