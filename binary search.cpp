//code of binary search
#include<stdio.h>
int main()
{
	int a[100],low,high,mid,search,found=1,n,i;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter sorted elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&search);
	low=0;
	high=n-1;
	mid=low+high/2;
	while(low<high)
	{
		mid=low+high/2;
		if(search==a[mid])
		{
			found=1;
			break;
		}
		else if(search<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(found==1)
	printf("found");
	else
	printf("not found");
	return 0;
}
