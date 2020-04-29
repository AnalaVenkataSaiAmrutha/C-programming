/* Program used to convert decimal to octal number */
#include<stdio.h>
int dec_to_oct(int n)
{
	int a[30],i=0,j;
	while(n!=0)
	{
		a[i++]=n%8;
		n=n/8;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	dec_to_oct(n);
}
