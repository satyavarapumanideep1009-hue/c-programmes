#include<stdio.h>
int main(){
	int n,r,d,t;
	scanf("%d",&n);
	t=n;r=0;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	printf("reverse number is %d",r);
	return 0;
}
