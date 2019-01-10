#include<stdio.h>
int main(){
	int a, d, n, i , next, sum=0;
	scanf("%d %d %d", &a, &d, &n);
	for(i=0; i<n;i++)
	{
		next = a + (i*d);
		printf("%d\t", next);
		sum += next;
	}
	printf("\n%d\n", sum);
}
