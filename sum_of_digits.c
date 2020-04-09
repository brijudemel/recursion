#include<stdio.h>
int sum_of_digits(int);
int main()
{
	int n,s;
	printf("Enter the number: \n");
	scanf("%d",&n);
	s=sum_of_digits(n);
	printf("The sum of digit is:%d\n",s);
	return 0;
}
int sum_of_digits(int n)
{
	
	if(n==0)
	{
		return 0;
	}
	return ((n%10)+sum_of_digits(n/10));
}
