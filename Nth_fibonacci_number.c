#include<stdio.h> 
int fib(int n)
{
   if ( n <= 1 )
    { 
        return n;
    }
   return fib(n-1) + fib(n-2);
}
int main ()
{
  int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int m=fib(n);
        printf("%d\n",m);
    }
  return 0;
}

