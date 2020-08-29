//Counting the no. of set bit using right shift
#include<stdio.h>
int main()
{ int t,n;
  int c=0;
  printf("enter no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { printf("enter the no.\n");
    scanf("%d",&n);
    while(n>0)
    { if((n&1)>0)
      {  ++c;
      }
      n=n>>1;
    }
    printf("\n result: %d\n",c);
  }
  return 0;
} 
