/*Program to find whether given number is strong number or not*/
/*
STRONG NUMBER
If the sum of the factorials of digits equal to given number is
strong number.
eg- 145
1!=1
4!=24
5!=120
1+24+120=145
145 is a strong number
*/
#include<stdio.h>
int factorial(int r)
{
	if(r==0)
	  return 1;
	else
	  return r*factorial(r-1);
	  
    
}
int strong_number(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+factorial(r);
		//printf("%d\n",factorial(r));
		n=n/10;
	}
	//printf("%d\n",sum);
	return sum;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=strong_number(n);
	if(res==n)
	  printf("It is a strong number");
	else
	  printf("It is not a strong number");
}
