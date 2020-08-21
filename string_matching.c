#include<stdio.h>
#include<string.h>
int match(char str1[],char str2[])
{ int l1,l2,i,p,e,j;
  p=-1;
  l1=strlen(str1);
  l2=strlen(str2);
  if(l2>l1)
  { return -1;
  }
  for(i=0;i<=l1-l2;++i)
  { p=i=e;
    for(j=0;j<l2;++j)
    { if(str2[j]==str1[e])
      { ++e;
      }
      else
      { break;
      }
    }
    if(j==l2)
    { return p;
    }
  }
  return -1;
}
int main()
{ int m,n;
  printf("enter the no. of characters of main and searching string\n");
  scanf("%d%d",&n,&m);
  char test[n];
  char pattern[m];
  printf("\nenter the main string\n");
  fgets(test,sizeof(test),stdin);
  printf("\nenter the searching string\n");
  fgets(pattern,sizeof(pattern),stdin);
  int p=match(test,pattern);
  if(p!=-1)
  { printf("\nFound at position: %d\n",p+1);
  }
  else
  { printf("\nSorry not found\n");
  }
  return 0;
}
  
