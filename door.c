#include<stdio.h>
int main()
{
	int arr[100], n, i, num=0,r, j, count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=1;
		num=(num*10) + r;
		arr[i]=r;
	}
	j=2;
	while(j<=n)
	{
	for(i=1;i<=n;i++)
	{
		if(i%j==0)
		{
		//	arr[j]=(!arr[j]);
			if(arr[i]==0)
			arr[i]=1;
			else
			arr[i]=0; 
		}	
	}
	j++;
	}
	for(i=1;i<=n;i++)
	{
	//	printf("%d", arr[i]);
	if(arr[i]==1)
	{
		count++;
	}
	}
	printf("%d",count);
}
