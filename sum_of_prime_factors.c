#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,j,p;
	int sum=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n];
	    int k=0;
	    for(i=2;i<=n;++i)
	    {
	        if(n%i==0)
	        {
	            p=1;
	            for(j=2;j<=i/2;++j)
	            {
	                if(i%j==0)
	                {
	                    p=0;
	                    break;
	                }
	            }
	            if(p==1)
	            {
	                sum=sum+i;
	            }
	        }
	    }
	    printf("%d\n",sum);
	 
	}
	return 0;
}

