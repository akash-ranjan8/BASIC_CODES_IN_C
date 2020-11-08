#include<stdio.h>
#include<string.h>
int max(int a,int b)
{ return (a>b)?a:b;
}
int lcs(char a[],char b[],int m,int n)
{ int L[m+1][n+1];
  int i,j;
  for(i=0;i<=m;++i)
  { for(j=0;j<=n;++j)
    { if(i==0 || j==0)
      { L[i][j]=0;
      }
      else if(a[i-1]==b[j-1])
      { L[i][j]=L[i-1][j-1]+1;
      }
      else
      { L[i][j]=max(L[i-1][j],L[i][j-1]);
      }
    }
  }
  return L[m][n];
}
int main()
{ char a[100],b[100];
  printf("enter the main string\n");
  gets(a);
  printf("enter the checking string\n");
  gets(b);
  int m=strlen(a);
  int n=strlen(b);
  int z=lcs(a,b,m,n);
  printf("Maximum size of LCS possible: %d\n",z);
  return 0;
}
