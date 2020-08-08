#include<stdio.h>
int main()
{ char str[50],ch;
  int c=0;
  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);
  printf("enter the character to be searched\n");
  scanf("%c",&ch);
  int i;
  for(i=0;str[i]!='\0';++i)
  { if(ch==str[i])
    { ++c;
    }
  }
  printf("The character is repeated = %d\n",c);
  return 0;
}
