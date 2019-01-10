/*
8. Using command line arguments, write a program check whether a number is prime or not.
*/
#include<stdio.h>
#include<conio.h>

int string_to_int(char *str)
{
	int i,x;
	for(i=0,x=0;i<str[i];i++){
		if(i==0 && str[0]=='-')
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
	int n, i, flag = 0;
	n = string_to_int(argv[1]);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
}

