#include<stdio.h>

int check2(int n,int x)
{
	int rem=0;
	while(n!=0)
	{
		rem=n%10;
		if(rem==x)
		return 1;
		n/=10;
	}
	return 0;
}

int main()
{
	int l, u, n, i, count=0;
	printf("num and lower and upper bound:\n");
	scanf("%d %d %d", &n,&l,&u);
	i=l+1;
	while(i<u)
	{
		if(check2(i,n))
		count++;
		i++;
	}
	printf("%d",count);
}
