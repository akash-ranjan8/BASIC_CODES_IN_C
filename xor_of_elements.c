//given an array of integers and queries of form L,R find XOR of elements from L to R in the given array
#include<stdio.h>
#include<time.h>
int main()
{ int n1,n2,t1,i,j,l,r;
  clock_t t;
  t=clock();
  printf("enter the no. of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the no. of elements of array\n");
    scanf("%d",&n1);
    printf("enter the no. of queries\n");
    scanf("%d",&n2);
    int a[n1];
    int q[n2][2];
    printf("enter the elements\n");
    for(i=0;i<n1;++i)
    { scanf("%d",&a[i]);
    }
    printf("enter the queries\n");
    for(i=0;i<n2;++i)
    { for(j=0;j<2;++j)
      { scanf("%d",&q[i][j]);
      }
    }
    int prefix[n1];
    int res[n1];
    int k=0;
    prefix[0]=a[0];
    for(i=1;i<n1;++i)
    { prefix[i]=prefix[i-1]^a[i];
    }
    for(j=0;j<n2;++j)
    { l=q[j][0];
      r=q[j][1];
      if(l==0)
      { res[k++]=prefix[r];
      }
      else
      { res[k++]=prefix[r]^prefix[l-1];
      }
    }
    for(i=0;i<sizeof(res);++i)
    { printf("%d\t",res[i]);
    }
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken: %f\n",time_taken);
  }
  return 0;
}
  
