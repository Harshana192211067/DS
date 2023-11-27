#include<stdio.h>
int main()
{
	int i,k,fact=1;
	printf("Enter number: ");
	scanf("%d",&i);
	if(i<0)
	{
		printf("Not exist");
	}
	else
	{
	
	for(k=1;k<=i;k++)
	{
		fact*=k;
	}
	printf("%d",fact);
	}
}
