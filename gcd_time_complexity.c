#include<stdio.h>
#include<time.h>
int main()
{ int a,b,i,gcd;
  clock_t t;
  t=clock();
  printf("enter the two numbers\n");
  scanf("%d%d",&a,&b);
  for(i=1;i<=a && i<=b;++i)
  { if(a%i==0 && b%i==0)
    { gcd=i;
    }
  }
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("time taken %f\n",time_taken);
  printf("the gcd is = %d\n",gcd);
  return 0;
}
