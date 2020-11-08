#include<stdio.h>
#include<string.h>
int main()
{ char a[100],b[100][100],temp;
  int i,j=0,k=0,x,len;
  printf("enter the string\n");
  gets(a);
  for(i=0;a[i]!='\0';++i)
  { if(a[i]==' ')
    { b[k][j]='\0';
      ++k;
      j=0;
    }
    else
    { b[k][j]=a[i];
      ++j;
    }
  }
  b[k][j]='\0';
  for(i=0;i<=k;++i)
  { len=strlen(b[i]);
    for(j=0,x=len-1;j<x;++j,--k)
    { temp=b[i][j];
      b[i][j]=b[i][x];
      b[i][x]=temp;
    }
  }
  for(i=0;i<=k;++i)
  { printf("%s ",b[i]);
  }
  return 0;
}
    
