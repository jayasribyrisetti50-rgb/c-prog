#include<stdio.h>
int main()
{
	float fahernheit,celius;
	printf("enter the temperature of fahernheit");
	scanf("%f,&fahernheit");
	celius=(fahernheit-32)*5.0/9.0;
	printf("temperature in celius:%2f\n");
return 0;
}
