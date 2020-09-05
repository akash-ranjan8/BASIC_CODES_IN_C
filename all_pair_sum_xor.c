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
    for(i=0;i<n;++i)
    { for(j=i+1;j<n;++j)
      { res=res^(a[i]+a[j]);
      }
    }
    printf("\nResult: %d\n",res);
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime Taken: %f\n",time_taken);
   }
   return 0;
}
