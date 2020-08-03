#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct pkt
{ char ch1;
  char ch2[2];
  char ch3;
};
char *convert(int n)
{ int m=n;
  int digit=0;
  while(m)
  { ++digit;
    m/=10;
  }
  char* arr;
  char arr1[digit];
  arr=(char*)malloc(digit);
  int index=0;
  while(n)
  { arr1[index]=n%10 + '0';
    n=n/10;
  }
  int i;
  for(i=0;i<index;++i)
  { arr[i]=arr1[index-i];
  }
  arr[i]='\0';
  return (char*)arr;
}
int main()
{ int n;
  printf("enter the number\n");
  scanf("%d",&n);
  int len=0;
  while(n)
  { ++len;
    n=n/10;
  }
  char* arr=convert(n);
  for(int i=0;i<len;++i)
  { printf("%c,",arr[i]);
  }
  return 0;
}

  
