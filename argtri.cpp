/*
5. Write a C program to input the base and sides of a triangle. Calculate the hypotenuse upto 2
decimal place.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int string_to_int(char *str){
	int x,i;
	for(i=0,x=0;i<str[i];i++){
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
	{
		x=-x;
	}
	return (x);
}
main(int argc,char *argv[])
{
	int base, a, b, s,area,x; //let base be argv[1], side1 (a) be argv[2] and side2 (b) be argv[3]
	base=string_to_int(argv[1]);
	a=string_to_int(argv[2]);
	b=string_to_int(argv[3]);
	s=(base+a+b)/2;
	x=s*(s-base)*(s-a)*(s-b);
	area=sqrt(x);
	printf("the are is %d",area);
	getch();
}
