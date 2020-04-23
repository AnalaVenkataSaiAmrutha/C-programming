/*Program to find whether given number is palindrome or not */

#include<stdio.h>
int palindrome(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	//printf("%d",sum);
	return sum;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=palindrome(n);
	if(res==n)
	  printf("Palindrome");
	else
	  printf("Not a Palindrome");
}
