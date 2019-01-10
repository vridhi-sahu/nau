#include<stdio.h>
#include<conio.h>
int string_to_int(char *str)
{
	int i,x;
	for(i=0,x=0;i<str[i];i++){	
		if(i==0 && str[0]=='-')
		i++;
		if(str[i]>='0' && str[i]<'9'){
		x=x*10+(str[i]-48);
		}
		else
			break;
	}
	if(str[0]=='-')
	x=-x;
	
	return (x);
}
/*
int string_to_int(char *str)
{
	int i,x;
	for(i=0,x=0;i<str[i];i++){
		if(i==0 && str[0]=='0')
		i++;
		if(str[i]>='0' && str[i]<='9'){
			x=x*10+(str[i]-48);
		}
		else
			break;
	}
	if(str[0]=='-')
	x=-x;
	return (x);
}
*/

main (int argc,char *argv[])
{
	int f=1,n;
	n=string_to_int(argv[1]);
	while(n>0)
	{
		f=f*n;
		n--;
	}
	printf("the factorial is %d",f);
	getch();
}
