// input a string and reverse it
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char *str,temp;
	int i,j;
	str=argv[1];
	i=0;
	j=strlen(str) - 1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf(str);
}
