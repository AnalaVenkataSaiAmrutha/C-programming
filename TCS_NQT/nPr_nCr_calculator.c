/*Program to calculate nPr and nCr when n and r are given */
#include<stdio.h>
int fact(int n)
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
	int n,r,nPr,nCr;
	scanf("%d%d",&n,&r);
	nPr=fact(n)/(fact(n-r));
	nCr=fact(n)/(fact(r)*fact(n-r));
	printf("%dP%d:%d\n",n,r,nPr);
	printf("%dC%d:%d\n",n,r,nCr);
}
