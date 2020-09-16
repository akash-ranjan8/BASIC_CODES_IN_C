#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[10];
	    for(i=0;n>0;++i)
	    {
	        a[i]=n%2;
	        n=n/2;
	    }
	    for(i=i-1;i>=0;--i)
	    {
	        printf("%d",a[i]);
	    }
	}
	return 0;
}

