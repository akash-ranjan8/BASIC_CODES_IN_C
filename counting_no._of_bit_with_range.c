#include<stdio.h>
#include<time.h>
int main()
{ int n,t1;
  clock_t t;
  t=clock();
  printf("enter the no. of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the number upto which you want the bit\n");
    scanf("%d",&n);
    int c=0;
    for(int i=0;i<=n;++i)
    { while(i)
      { c++;
        i=i&(i-1);
      }
      printf("No. of 1 Bit for %d: %d\n",i,c);
    }
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken: %f\n",time_taken);
   }
   return 0;
}
    
