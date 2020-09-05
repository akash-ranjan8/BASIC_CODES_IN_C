//swap using xor
#include<stdio.h>
int main()
{ int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  a^=b^=a^=b;
  printf("swapped a= %d, b= %d\n",a,b);
  return 0;
}
