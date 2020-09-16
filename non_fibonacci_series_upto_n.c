#include <stdio.h>
int is_fibo(int d)
{
    int a,b,c;
    a=0,b=1;
    if(d==a||d==b)
    {
        return 1;
    }
    while(b<=d)
    {
        c=b;
        b=a+b;
        a=c;
        if(b==d)
        {
            return 1;
        }
    }
    return 0;
    
}
int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(int i=1;i<=n;++i)
	    {
	        int flag=is_fibo(i);
	        if(!flag)
	        {
	            printf("%d\t",i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

