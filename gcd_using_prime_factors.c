#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{ int a,b;
  printf("enter the numbers\n");
  scanf("%d%d",&a,&b);
  int prime1[100];
  int prime2[100];
  int k=0;
  clock_t t;
  t=clock();
  while(a%2==0)
  { prime1[++k]=2;
    a=a/2;
  }
  for(int i=3;i<=sqrt(a);i=i+2)
  { while(a%i==0)
    { prime1[++k]=i;
      a=a/i;
    }
  }
  int m=0;
  while(b%2==0)
  { prime2[++m]=2;
    b=b/2;
  }
  for(int i=3;i<=sqrt(b);i=i+2)
  { while(b%i==0)
    { prime2[++m]=i;
      b=b/i;
    }
  }
  int gcd=1;
  int i=0;
  int j=0;
  while(i<k && j<m)
  { if(prime1[i]==prime2[j])
    { gcd=gcd*prime1[i];
    }
    ++i;
    ++j;
  }
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("TIME TAKEN: %f\n",time_taken);
  printf("GCD IS %d\n",gcd);
  return 0;
}

