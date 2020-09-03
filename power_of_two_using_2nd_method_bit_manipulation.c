#include<stdio.h>
#include<stdbool.h>
bool power_of_two(int n)
{ if(n<=0)
  { return false;
  }
  else
  { if((n&(n-1))==0)
    { return true;
    }
    else
    { return false;
    }
   }
}
int main()
{ int n;
  printf("enter the no.\n");
  scanf("%d",&n);
  bool x=power_of_two(n);
  if(x)
  { printf("true\n");
  }
  else
  { printf("false\n");
  }
  return 0;
}
