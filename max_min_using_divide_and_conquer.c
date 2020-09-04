#include<stdio.h>
#include<time.h>
void min_max(int a[],int s,int e,int min,int max)
{ if(s==e)
  { if(max<a[s])
    { max=a[s];
    }
    if(min>a[e])
    { min=a[e];
    }
    return;
  }
  if((e-s)==1)
  { if(a[s]<a[e])
    { if(min>a[s])
      { min=a[s];
      }
      if(max<a[e])
      { max=a[e];
      }
    }
    else
    { if(min>a[e])
      { min=a[e];
      }
      if(max<a[s])
      { max=a[s];
      }
    }
    return;
  }
  int mid=(s+e)/2;
  min_max(a,s,mid,min,max);
  min_max(a,mid+1,e,min,max);
}
int main()
{ int t1,n,i,min,max;
  min=100000;
  max=-100000;
  clock_t t;
  t=clock();
  printf("enter the number of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;++i)
    { scanf("%d",&a[i]);
    }
    min_max(a,0,n-1,min,max);
    printf("\nMAX: %d\n",max);
    printf("\nMIN: %d\n",min);
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime Taken: %f\n",time_taken);
  }
  return 0;
}
    
