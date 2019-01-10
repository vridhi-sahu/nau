/*
1*2*3*4*17*18*19*20
 5*6*7*14*15*16
  8*9*12*13
   10*11
*/
#include<stdio.h>
int main()
{
int count1=0,count2=0,j,k,i,l;
		int N=4;
		for(i=N;i>=1;i--) {
			for(j=N;j>i;j--) printf(" ");
			
			for(k=1;k<=i;k++) printf("%d*",++count1);
			
			for(l=1;l<=i;l++) {
				printf("%d",++count2+i*i);   
                                 if(l!=i) printf("*");
			}
			printf("\n");
		}
}
