//To Check The ith bit is set or not
#include<stdio.h>
int main()
{ int t,n,f,i,res;
  f=1;
  printf("enter the no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { printf("\nenter the no. and its ith bit\n");
    scanf("%d%d",&n,&i);
    f=f<<i;
    res=n&f;
    if(res==0)
    { printf("\nTRUE\n");
    }
    else
    { printf("\nFALSE\n");
    }
  }
  return 0;
}
