#include<stdio.h>
int prime_check(int,int);
int main()
{
	int n,s;
	printf("Enter the number to be checked: \n");
	scanf("%d",&n);
	s=prime_check(n,2);
	if(s==1)
	{
		printf("It is a prime number.");
	}
	else
	{
		printf("It is a not prime number.");
	}
	
	return 0;
}
int prime_check(int n,int i)
{
	if (n <2) 
    {
	
	    return 0; 
	}
	if(n==2)
	{
		return 1;
	}
	else
	{
	
		if (n%i ==0 && n!=i) 
    	{
			return 0; 
		}
		else if(n==i)
		{
			return 1;
		}
		else
    	{
    		return prime_check(n,i+1);  
		}
	}
    
}
