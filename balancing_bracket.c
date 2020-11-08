#include<stdio.h>
#include<string.h>
int main()
{ char str[100];
  printf("enter the bracket sequence\n");
  gets(str);
  int i=0;
  int c1,c2;
  c1=0;
  c2=0;
  while(str[i]!='\0')
  { if(str[i]=='(')
    { ++c1;
    }
    else
    { ++c2;
    }
    ++i;
  }
  if(c1==c2)
  { printf("Balanced\n");
  }
  else
  { printf("Not Balanced\n");
  }
  return 0;
}
