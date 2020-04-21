
/*Program to print the reverse of a string */

#include<stdio.h>
#include<stdlib.h>
char * reverse(char *str)
{
	char *rev;
	int i,len,j=0;
	//printf("%s",str);
	for(len=0;str[len]!='\0';len++);
	//printf("%d",len);
	rev=(char *)malloc(len*sizeof(char));
	for(i=len-1;i>=0;i--)
	{
		rev[j++]=str[i];
	}
	//printf("%s",rev);
	return rev;
	
}
int main()
{
	char str[100],*rev;
	scanf("%[^\n]s",str);
	rev=reverse(str);
	printf("%s",rev);
	
}
