//anagram means characters in the two strings must be same irrespective of there order in the string
#include<stdio.h>
#include<string.h>
int main()
{ char str1[100],str2[100];
  int i,j;
  printf("enter the strings\n");
  gets(str1);
  gets(str2);
  int n1=strlen(str1);
  int n2=strlen(str2);
  if(n1!=n2)
  { printf("not anagram\n");
  }
  else
  { for(i=0;i<n1-1;++i)
    { for(j=i+1;j<n1;++j)
      { if(str1[i]>str1[j])
        { char temp=str1[i];
          str1[i]=str1[j];
          str1[j]=temp;
        }
      }
    }
    int flag=0;
    for(i=0;i<n2-1;++i)
    { for(j=i+1;j<n2;++j)
      { if(str2[i]>str2[j])
        { char temp=str2[i];
          str2[i]=str2[j];
          str2[j]=temp;
        }
      }
    }
    for(i=0;i<n1;++i)
    { if(str1[i]!=str2[i])
      { flag=1;
      }
    }
    if(flag==0)
    { printf("anagram\n");
    }
    else
    { printf("not anagram\n");
    }
  }
  return 0;
}
    
