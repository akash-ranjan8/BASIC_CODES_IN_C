#include<stdio.h>
#include<time.h>
int main()
{ int t1,n,i,j;
  int res=0;
  clock_t t;
  t=clock();
  printf("enter the no. of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;++i)
    { scanf("%d",&a[i]);
    }
    for(i=0;i<31;++i)
    { int c1=0;
      int c2=0;
      for(j=0;j<n;++j)
      { if(a[j] & (1<<i))
        { ++c1;
        }
        else
        { ++c2;
        }
      }
      int p=c2*c1;
      res=res+(1<<i)*p;
    }
    printf("\nResult: %d\n",res);
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime Taken: %f\n",time_taken);
   }
   return 0;
}
