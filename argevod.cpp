#include<stdio.h>
#include<conio.h>

int string_to_int(char *str){
	int x,i;
	for(i=0,x=0;i<str[i];i++)
	{
		if(i==0 && str[i]=='-')
		i++;
		if(str[i]>='0' && str[i]<='9')
		{
			x=x*10+(str[i]-48);
		}
		else
		break;
	}
	if(str[0]=='-')
	x=-x;
	return(x);
}

main(int argc, char *argv[]){
	int i,arr[100000], sumodd=0, sumeven=0;
	for(i=0;i<argc;i++)
	{
		arr[i]=string_to_int(argv[i]);
	}
	
	for(i=1;i<argc;i++)
	{
		printf("\n %d",arr[i]);
	}
	
	
	
	for(i=1;i<argc;i++)
	{
		if(arr[i]%2==0)
		{
			sumeven=sumeven + arr[i];
		}
		else
		{
			sumodd=sumodd + arr[i];
		}
	}
	printf("\n the sum of all even numbers are %d",sumeven);
	printf("\n the sum of all odd numbers are %d",sumodd);
	
}
