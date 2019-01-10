#include<stdio.h>
#include<stdlib.h>
int ispal(int k) {
	int r,s=0;
	int y=k;
	while(k!=0) {
		r=k%10;
		s=s*10+r;
		k=k/10;
	}
	if(y==s) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int n,i,j;
	int a,b;
	printf("Enter a no:");
	scanf("%d",&n);
	for(i=n;i<=n+500;i++) {
		a=ispal(i);
		if(a==1) {
			break;
		}
	}
	for(j=n;j>=n-500;j--) {
		b=ispal(j);
		if(b==1) {
			break;
		}
	}
	if((i-n)>(n-j))
	 {
	 	printf("%d",j);
	 }
	 else{
	 	printf("%d",i);
	 }
	 return 0;
}
