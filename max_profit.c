#include<stdio.h>
int main()
{ int n,t,i,k;
  int sum=0;
  printf("enter the no. of test cases\n");
  scanf("%d",&t);
  while(t--)
  { printf("enter he size\n");
    scanf("%d",&n);
    int d[n];
    int p[n];
    printf("enter the distance \n");
    for(i=0;i<n;++i)
    { scanf("%d",&d[i]);
    }
    printf("enter the profit\n");
    for(i=0;i<n;++i)
    { scanf("%d",&p[i]);
    }
    printf("enter the value for separation\n");
    scanf("%d",&k);
    for(i=0;i<n;++i)
    { if(  d[i]%2==0 && (d[i+1]-d[i])>0)
      { sum=sum+p[i];
      }
    }
    printf("Max Profit: %d\n",sum);
  }
  return 0;
}
