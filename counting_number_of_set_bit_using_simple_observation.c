//Counting no. of set bit by simple observation
#include<stdio.h>
int main()
{ int n,t;
  int c=0;
  printf("enter the no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { printf("enter the no.\n");
    scanf("%d",&n);
    while(n>0)
    { ++c;
      n=n&(n-1);
    }
    printf("result: %d\n",c);
  }
  return 0;
}
