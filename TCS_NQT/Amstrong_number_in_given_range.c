/*Program to find the amstrong numbers in the given range */
/*
AMSTRONG NUMBER
The sum of the cubes of its digits is equal to the number itself
is amstrong number.
eg-371
3*3*3+7*7*7+1*1*1
27+343+1
371
371 is amstrong number 
*/

#include<stdio.h>
int amstrong_number(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int l,h,res,i;
	
	scanf("%d%d",&l,&h);
	for(i=l;i<=h;i++)
	{
		res=amstrong_number(i);
		if(res==i)
		 printf("%d ",res);
		
    }
    return 0;
}
