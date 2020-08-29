//Binary Shift Right
#include<stdio.h>
int main()
{ int t,n,i;
  printf("enter the no. of testcases\n");
  scanf("%d",&t);
  while(t--)
  { printf("\nenter the no. and shift bit left\n");
    scanf("%d%d",&n,&i);
    n=n>>i;
    printf("\n result: %d\n",n);
  }
  return 0;
}
