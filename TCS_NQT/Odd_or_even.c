/*Program to find given number is odd or even */

#include<stdio.h>
int odd_or_even(int n)
{
	if(n%2==0)
	 return 1;
	else
	 return 0;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=odd_or_even(n);
	if(res==0)
	  printf("Odd number");
	else
	  printf("Even number");
}
