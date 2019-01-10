/* 7. Using command line arguments, write a program to take a number n and generate the Fibonacci
series upto nth term.
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
main(int argc, char *argv[])
{
	int i, n, t1 = 0, t2 = 1, nextTerm;
    n=string_to_int(argv[1]);

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
}
