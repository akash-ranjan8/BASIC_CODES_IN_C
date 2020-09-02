#include<stdio.h>
#include<time.h>
int main()
{ int n,t,i;
  printf("enter the no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { clock_t t;
    t=clock();
    printf("enter the number of process\n");
    scanf("%d",&n);
    int g[n];
    int t1[n];
    printf("enter the profit\n");
    for(i=0;i<n;++i)
    { scanf("%d",&g[i]);
    }
    printf("enter the max time of the process upto which process profit is valid\n");
    for(i=0;i<n;++i)
    { scanf("%d",&t1[i]);
    }
    int sum=0;
    int e=0;
    for(i=0;i<n;++i)
    { if(e<=t1[i])
      { sum=sum+g[i];
        ++e;
      }
    }
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTotal Profit: %d\n",sum);
    printf("\nTime Taken: %f\n",time_taken);
   }
   return 0;
} 

    

