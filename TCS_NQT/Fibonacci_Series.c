
/*Program to find fibonacci series */
/*eg-6
0 1 1 2 3 5
*/

#include<stdio.h>
void fibanocci(int n)
{
	int x1=0,x2=1,i,x3;
	if(n==1)
	  printf("%d",x1);
	if(n!=1)
 	  printf("%d %d ",x1,x2);
	for(i=2;i<n;i++)
	{
		x3=x1+x2;
		printf("%d ",x3);
		x1=x2;
		x2=x3;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fibanocci(n);
}
