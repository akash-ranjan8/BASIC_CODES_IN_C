//minimum no. of flips needed to convert a OR b to c
#include<stdio.h>
#include<time.h>
#include<stdbool.h>
int min_flips(int a,int b,int c)
{ int res=0;
  for(int i=0;i<32;++i)
  { bool x=false;
    bool y=false;
    bool z=false;
    if(a &(1<<i))
    { x=true;
    }
    if(b &(1<<i))
    { y=true;
    }
    if(c &(1<<i))
    { z=true;
    }
    if(z==false)
    { if(x==true && y==true)
      { res+=2;
      }
      else
      { if(x==true || y==true)
        { res++;
        }
      }
    }
    else
    { if(x==false && y==false)
      { res++;
      }
    }
  }
    return res;
}
int main()
{ int t1,a,b,c;
  clock_t t;
  t=clock();
  printf("enter the no. of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int z=min_flips(a,b,c);
    printf("\nMin No. of Flips: %d\n",z);
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTime Taken: %f\n",time_taken);
  }
  return 0;
} 
