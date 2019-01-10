// ap series
#include<stdio.h>
int main()
{
	int a, b, c, ap, i, n=1000, arr[1000], flag=0;
	scanf("%d %d %d", &a, &b, &c);
	arr[0]=a;
	i=1;
	while(i<1000)
	{
		gp=a+b;
//		printf("%d\t",ap);
		arr[i]=ap;
		i++;
		a=ap;
	}
	for(i=0;i<=n;i++)
	{
		if(arr[i]==c)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("present");
	}
	else
	{
		printf("not present");
	}
}
