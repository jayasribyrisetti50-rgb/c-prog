#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0,temp;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
	d++;
		temp=temp/10;
	}
	temp=n;
	while=(temp!=0)
	{
		rem=n%10;
		sum=sum+pow(rem,digits);
		temp=temp/10;
	}
	if (sum==n)
	printf("Armstrong Number");
	else
	printf("not Armstrong Number");
	return 0;
}
