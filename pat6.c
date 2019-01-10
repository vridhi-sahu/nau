#include<stdio.h>
int count(int n)
{
	int static m=1;
	if(n==1)
	return(m);
	else
	{
		m=n+(n-1);
		count(m);
	}
}
int main()
{
	int n, m;
	scanf("%d",&n);
	m= count(n);
	printf("%d", m);
}
