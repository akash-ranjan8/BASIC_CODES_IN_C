#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{ char str[100];
  int i=0;
  printf("enter the string\n");
  gets(str);
  str[0]=toupper(str[0]);
  while(str[i]!='\0')
  { if(str[i]==' ')
    { str[i-1]=toupper(str[i-1]);
      str[i+1]=toupper(str[i+1]);
    }
    ++i;
  }
  int n1=strlen(str);
  str[n1-1]=toupper(str[n1-1]);
  printf("%s",str);
  return 0;
}
