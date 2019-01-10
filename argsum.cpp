#include<stdio.h>
#include<conio.h>

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

main(int argc,char *argv[])
{
	int i,sum=0;
	for(i=1;i<argc;i++)
	{
		sum=sum + string_to_int(argv[i]);
	}
	printf("sum is %d",sum);
	getch();
	
}

