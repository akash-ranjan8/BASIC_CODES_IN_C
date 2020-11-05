#include<stdio.h>
#include<string.h>
int main()
{ char str[100];
  printf("enter the string\n");
  gets(str);
  int c=0,count[26]={0},x;
  while(str[c]!='\0')
  { if(str[c]>='a' && str[c]<='z')
    { x=str[c]-'a';
      count[x]++;
    }
    c++;
  }
  int p=0;
  for(c=0;c<26;++c)
  { if(count[c]==1)
    { p=c;
      break;
    }
  }
  printf("%c",str[p]);
  return 0;
}
