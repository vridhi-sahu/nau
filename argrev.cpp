#include<stdio.h>
#include<conio.h>
#include<math.h>
int string_to_int(char *str){
	int x,i;
	for(i=0,x=0;i<str[i];i++){
		if(i==0 && str[i]=='-')
		i++;
		if(str[i]>='0' && str[i]<'9')
		{
			x=x*10+(str[i]-48);
		}
		else
		break;
	}
	if(str[0]=='-')
	{
		x=-x;
	}
	return (x);
}
main(int argc, char *argv[])
{
	int n, digit, rev = 0;
	n=string_to_int(argv[1]);
	do
	{
		digit = n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}while(n!=0);
	printf("reverse is %d",rev);
	getch();
}
