#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=0, b=1, c=0, i;
	for(i=1;i<=8;i++)
	{
		if(i==1){
			printf("%d\t",a);
		}
		if(i==2){
			printf("%d\t",b);
		}
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);

	}
}
