//Activity selection by greedy's Algorithm
#include<stdio.h>
#include<time.h>
int main()
{ int t1,n,i;
  clock_t t;
  t=clock();
  printf("enter the no. of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the no. of activities\n");
    scanf("%d",&n);
    int s[n];
    int e[n];
    printf("enter the starting time of activities\n");
    for(i=0;i<n;++i)
    { scanf("%d",&s[i]);
    }
    printf("enter the end time of activities\n");
    for(i=0;i<n;++i)
    { scanf("%d",&e[i]);
    }
    i=0;
    int j;
    printf("\nSelected Activities are as follows: \n");
    printf("%d\t",i);
    for(j=1;j<n;++j)
    { if(s[j]>=e[i])
      { printf("%d\t",j);
        i=j;
      }
    }
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken: %f\n",time_taken);
   }
   return 0;
}

  

