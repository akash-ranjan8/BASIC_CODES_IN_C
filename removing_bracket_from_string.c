#include<stdio.h>
#include<string.h>
int main()
{ char str[100],str1[100];
  printf("enter the expression\n");
  gets(str);
  int i=0;
  int j=0;
  while(str[i]!='\0')
  { if(str[i]!='(' || str[i]!=')')
    { str1[j]=str[i];
      ++j;
    }
    ++i;
  }
  str1[j]='\0';
  printf("%s",str1);
  return 0;
}
    
  
