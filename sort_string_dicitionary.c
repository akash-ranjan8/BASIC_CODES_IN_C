#include<stdio.h>
#include<string.h>
int main()
{ char temp[50];
  int i,j,n;
  printf("enter the number of words\n");
  scanf("%d",&n);
  char str[n][50];
  for(i=0;i<=n;++i)
  { fgets(str[i],sizeof(str[i]),stdin);
  }
  for(i=0;i<=n;++i)
  { for(j=i+1;j<=n;++j)
    { if(strcmp(str[i],str[j])>0)
      { strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],temp);
      }
    }
  }
  for(i=0;i<=n;++i)
  { fputs(str[i],stdout);
  }
  return 0;
}
