#include<stdio.h>
typedef unsigned char BYTE;
int main()
{ unsigned int n;
  printf("enter the hexadecimal no.\n");
  scanf("%x",&n);
  BYTE a,b,c,d;
  a=(n&0xFF);
  b=((n>>8)&0xFF);
  c=((n>>16)&0xFF);
  d=((n>>24)&0xFF);
  printf("a= %02X\n",a);
  printf("b= %02X\n",b);
  printf("c= %02X\n",c);
  printf("d= %02X\n",d);
  return 0;
}
