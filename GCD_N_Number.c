#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int find_GCD(int n,int a[n])
{
    int result=a[0];
    for(int i=1;i<n;++i)
    {
        result=gcd(a[i],result);
        if(result==1)
        {
            return 1;
        }
    }
    return result;
}
int main() {
	// your code goes here
	int t,n,k,i;
	scanf("%d",&t);
	while(t--)
	{
	   
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;++i)
	    {
	        scanf("%d",&a[i]);
	    }
	    k=find_GCD(n,a);
	    printf("%d\n",k);
	}
	return 0;
}

