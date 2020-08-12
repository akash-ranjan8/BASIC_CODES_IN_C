#include<stdio.h>
#include<time.h>
int gcd(int a,int b)
{ if(a==0)
  { return b;
  }
  else
  { return gcd(b%a,a);
  }
}
int main()
{ int a,b;
  clock_t t;
  t=clock();
  printf("enter the two numbers\n");
  scanf("%d%d",&a,&b);
  int k=gcd(a,b);
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("TIME TAKEN: %f\n",time_taken);
  printf("gcd is = %d\n",k);
  return 0;
}
