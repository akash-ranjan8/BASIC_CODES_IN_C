#include<stdio.h>
#include<string.h>
int fact(int n)
{ return (n<=1) ? 1:n*fact(n-1);
}
int findsmallerinright(char *str,int l,int h)
{ int c=0;
  for(int i=l+1;i<=h;++i)
  { if(str[i]<str[l])
    { ++c;
    }
  }
  return c;
}
int findrank(char *str)
{ int rank=1;
  int len=strlen(str);
  int m=fact(len);
  int i,c;
  for(i=0;i<len;++i)
  { m/=len-i;
    c=findsmallerinright(str,i,len-1);
    rank+=c*m;
  }
  return rank;
}
int main()
{ char str[100];
  printf("enter the string\n");
  gets(str);
  int r=findrank(str);
  printf("Rank: %d\n",r);
  return 0;
}
    
