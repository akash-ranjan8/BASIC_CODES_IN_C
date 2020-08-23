#include<stdio.h>
#include<stdbool.h>
void unique_elements(int a, int b)
{ int num,i;
  for(i=a;i<=b;++i)
  { num=i;
    bool v[10]={false};
    while(num)
    { if(v[num%10])
      { break;
      }
      else
      {
        v[num%10]=true;
      }
      num=num%10;
    }
    if(num==0)
    { printf("%d\t",i);
    }
  }
}
int main()
{ int n1,n2;
  printf("enter the range\n");
  scanf("%d%d",&n1,&n2);
  unique_elements(n1,n2);
  return 0;
}
