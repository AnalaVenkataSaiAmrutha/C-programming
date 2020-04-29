#include<stdio.h>
#include<stdlib.h>
int str_palindrome(char *str)
{
	char *rev;
	int i,l,j=0;
	//printf("%s",str);
	for(l=0;str[l]!='\0';l++);
	rev=(char*)malloc(l*sizeof(char));
	for(i=l-1;i>=0;i--)
	{
		rev[j++]=str[i];
	}
	for(i=0,j=0;i<l;i++)
	{
		if(str[i]!=rev[i])
		  return 0;
	}
	return 1;
	  
}
int main()
{
	char str[100];
	int res;
	scanf("%[^\n]s",str);
	res=str_palindrome(str);
	if(res==0)
	  printf("String is not a palindrome");
	else
	  printf("String is a palindrome");
}
