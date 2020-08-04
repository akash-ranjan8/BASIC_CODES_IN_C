#include<stdio.h>
struct pkt
{ char ch1;
  char ch2[2];
  char ch3;
};
int main()
{ struct pkt p;
  unsigned int n;
  printf("enter the hexadecimal number\n");
  scanf("%x",&n);
  p.ch1=(n&0xFF);
  p.ch2[0]=((n>>8)&0xFF);
  p.ch2[1]=((n>>16)&0xFF);
  p.ch3=((n>>24)&0xFF);
  printf("a= %02X\n",p.ch1);
  printf("b= %02X\n",p.ch2[0]);
  printf("c= %02X\n",p.ch2[1]);
  printf("d= %02X\n",p.ch3);
  printf("0x%x%x%x%x",p.ch3,p.ch2[1],p.ch2[0],p.ch1);
  return 0;
}
