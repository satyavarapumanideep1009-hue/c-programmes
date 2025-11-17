#include<stdio.h>
int main()
{
	char s1[10]="hello ece";
	char s2[10];
	printf("enter s2 string");
	scanf("%[^\n]s",s2);
	printf("%s",s1);
	printf("%s",s2);
	return 0;
}
