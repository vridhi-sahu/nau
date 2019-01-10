/*
9. Using command line arguments, write a program check a year is leap year or not.
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
int year;

    year=string_to_int(argv[1]);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
}
    
