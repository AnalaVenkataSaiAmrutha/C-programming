/*Program which is used to convert octal to decimal number */
#include<stdio.h>
int power(int n , int i)
{
	if(i==1)
	 return n;
	else if(i==0)
	 return 1;
	else
     return n*power(n,i-1);	 
	
}
int oct_to_dec(int n)
{
	int r,dec=0,i=0;;
	while(n!=0)
	{
		r=n%10;
		dec=dec+r*power(8,i);
		i++;
		n=n/10;
	}
	return dec;
}
int main()
{
	int n,dec;
	scanf("%d",&n);
	dec=oct_to_dec(n);
	printf("%d",dec);
}
