#include<stdio.h>
int main(){
	int n,s,d,t;
	scanf("%d",&n);
	t=n;s=0;
	 while(n>0)
	{
		d=n%10;
	  s=s*10+d;
		n=n/10;
	}
	if(s==t)
	{
		printf("%d is a pallindrome no.",t);
	}
	else
	{
		printf("%d is not a pallindrome no.",t);
	}
	return 0;
}
