#include<stdio.h>
#include<time.h>
int euclid_subtraction(int a,int b)
{ while(a!=b)
  { if(a>b)
    { a=a-b;
    }
    else
    { b=b-a;
    }
  }
  return a;
}
int main()
{ int n1,n2,k;
  clock_t t;
  t=clock();
  printf("enter the two numbers\n");
  scanf("%d%d",&n1,&n2);
  k=euclid_subtraction(n1,n2);
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("TIME TAKEN : %f\n",time_taken);
  printf("the gcd of two numbers is = %d\n",k);
  return 0;
}
  
