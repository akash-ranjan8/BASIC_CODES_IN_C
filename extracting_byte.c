#include<stdio.h>
int main()
{ int x,i;
  printf("enter the number\n");
  scanf("%d",&x);
  for(i=0;i<sizeof(x);++i)
  { unsigned char byte = *((unsigned char *)&x +i);
    printf("Byte %d = %u\n",i,(unsigned)byte);
  }
  return 0;
}
