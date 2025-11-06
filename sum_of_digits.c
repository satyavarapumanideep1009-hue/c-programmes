#include<stdio.h>
int main(){
	int n,s,d,t;
	scanf("%d",&n);
	t=n;s=0;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("sum is %d",s);
	return 0;
}
