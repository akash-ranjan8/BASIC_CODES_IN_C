#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,sum=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    while(n!=0)
	    {
	        int d=n%10;
	        sum=sum+d;
	        n=n/10;
	    }
	    if(n%sum==0)
	    {
	        printf("Harshad Number\n");
	    }
	    else
	    {
	        printf("Not a Harshad Number\n");
	    }
	}
	return 0;
}

