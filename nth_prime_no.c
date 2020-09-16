#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int c=0,num=2,l=0;
    while(c!=n)
    {
        int count=0;
        for(int i=2;i<=sqrt(num);++i)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            c++;
            l=num;
        }
        num=num+1;
    }
    return l;
}
int main() {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int z=prime(n);
	    printf("%d\n",z);
	}
	return 0;
}

