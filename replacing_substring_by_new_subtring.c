#include<stdio.h>
#include<string.h>
void replace_string(char str[],char substr[],char new_substr[])
{ int l1=strlen(str);
  int l2=strlen(substr);
  int l3=strlen(new_substr);
  int i=0,j,k;
  int flag=0,start,end;
  for(i=0;i<l1;++i)
  { flag=0;
    start=i;
    for(j=0;str[i]==substr[j];++j,++i)
    if(j==l2-1)
    flag=1;
    end=i;
    if(flag==0)
    i-=j;
    else
    { for(j=start;j<end;++j)
      { for(k=start;k<l1;++k)
        str[k]=str[k+1];
        l1--;
        --i;
      }
      for(j=start;j<start+l3;++j)
      { for(k=l1;k>=j;--k)
        str[k+1]=str[k];
        str[j]=new_substr[j-start];
        l1++;
        ++i;
      }
    }
  }
}   
int main()
{ char str[100],substr[50],new_substr[50];
  printf("enter the main string\n");
  gets(str);
  printf("enter the substring to be replaced\n");
  gets(substr);
  printf("enter the new substring with which need to be replaced\n");
  gets(new_substr);
  replace_string(str,substr,new_substr);
  printf("Modified string is as follows: %s\n",str);
  return 0;
}
