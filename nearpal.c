// closest pallindrome
#include<stdio.h>
int digit(int n)
{
	int count=0, k=0, arr[100],r;
	while(n>0)
	{
		k=count++;
		r=n%10;
		
		n=n/10;
	}
	return count;
}
int pal(int sum, int n)
{
	 if(sum==1)
	 {
	 	printf("%d",n);
	 }
	 
}
int main()
{
	int i, n, sum, pal;
	scanf("%d", &n);
	sum = digit(n);
	printf("%d",sum);
	pal = pal(sum,n);
}
