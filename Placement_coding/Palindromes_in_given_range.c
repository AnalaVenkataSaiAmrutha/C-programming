/* Program to find no of palindromes in the given range */
#include<stdio.h>
int palindrome(int num)
{ 
   int r,sum=0,n;
   n=num;
   while(num!=0)
   {
   	   r=num%10;
   	   num=num/10;
   	   sum=sum*10+r;
   	   
   }
   if(sum==n)
     return 1;
   else
     return 0;
	
}
int main()
{
	int n1,n2,res,cnt=0,i;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
	    res=palindrome(i);
	    if(res==1)
	      cnt++;
    }
    printf("No of palindromes:%d",cnt);
	
}
