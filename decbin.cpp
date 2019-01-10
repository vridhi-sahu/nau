#include<stdio.h>
#include<stdlib.h>

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
int bin=0, dec, rem=0,i=1;
dec=string_to_int(argv[1]);

while(dec!=0)
{
	rem=dec%2;
	bin+=rem*i;
	dec=dec/2;
	i=i*10;
}
printf("%d",bin);

}
