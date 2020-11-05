#include<stdio.h>
#include<string.h>
int main()
{ char str[100];
  int c=0,count[26]={0},x;
  printf("enter the string\n");
  gets(str);
  while(str[c]!='\0')
  { if(str[c]>='a' && str[c]<='z')
    { x=str[c]-'a';
      count[x]++;
    }
    c++;
  }
  for(c=0;c<26;++c)
  { if(count[c]!=0)
    {
      printf("%c occurs %d times in the string.\n",c+'a',count[c]);
    }
  }
  return 0;
}
