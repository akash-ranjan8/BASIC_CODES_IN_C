#include<stdio.h>
#include<string.h>
int main()
{ char a[100],b[200];
  printf("enter the string which need to be expanded\n");
  gets(a);
  int i=0;
  int p=0;
  int j,d;
  d=0;
  while(a[i]!='\0')
  { if(a[i]>='0' && a[i]<='9')
    { p=a[i];
      for(j=1;j<=p;++j)
      { b[d]=a[i-1];
        ++d;
      }
    }
    ++i;
  }
  b[d]='\0';
  printf("Expanded string is as follows: %s\n",b);
  return 0;
}
      
