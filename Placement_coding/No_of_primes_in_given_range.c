/* Program to find the number of primes of given range of different test cases */
/*eg--
i/P:4                 o/p:
10 14                      2                  
20 25                      1
3 15                       5
50 55                      1
*/

#include<stdio.h>
int prime_count(int n1,int n2)
{
	int fc=0,i,j,pc=0;
	
	for(j=n1;j<=n2;j++)
	{   
        fc=0;
        if(j==1||j==0)
           fc=1;
		for(i=2;i<=j/2;i++)
		{
		     if(j%i==0)
			 {
			 	fc++;
			 	break;
			 }	
		}
		if(fc==0)
		{
			//printf("%d ",j);
			pc++;
		}
    }
    return pc;
}
int main()
{
	int n1,n2,pc,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&n1,&n2);
		pc=prime_count(n1,n2);
		printf("%d",pc);
   }   
}
