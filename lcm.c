#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b,l;
	printf("Enter the numbers to be checked: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		l=lcm(b,a);
	}
	else
	{
		l=lcm(a,b);
	}
	printf("LCM is: %d",l);
	return 0;
}
int lcm(int a,int b)
{
	static int multiple = 0;
    multiple=multiple + b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}
