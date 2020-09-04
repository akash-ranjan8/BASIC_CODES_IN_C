//Basic Bitwise operator operations
#include<stdio.h>
int main()
{ int n1,n2;
  printf("enter two numbers\n");
  scanf("%d%d",&n1,&n2);
  printf("~n1: %d\n",~(n1));
  printf("~n2: %d\n",~(n2));
  printf("n1 & n2: %d\n",(n1&n2));
  printf("n1 | n2: %d\n",(n1 | n2));
  printf("n1 ^ n2: %d\n",(n1^n2));
  return 0;
}
  
