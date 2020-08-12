#include<stdio.h>
#include<time.h>
int fibo(int a,int b, int n)
{ int sum;
  if(n>0)
  { sum=a+b;
    printf("%d\t",sum);
    a=b;
    b=sum;
    return fibo(a,b,n-1);
  }
}
void main()
{ int c,d,s,e;
  c=0;
  d=1;
  clock_t t;
  t=clock();
  printf("enter the size\n");
  scanf("%d",&e);
  printf("fibonacci series\n");
  printf("%d\t%d\t",c,d);
  fibo(c,d,e-2);
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("\nTIME TAKEN: %f\n",time_taken);
}
