#include<stdio.h>
int main()
{ int *x,*y;
  int a,b;
  printf("enter the value of a & b\n");
  scanf("%d%d",&a,&b);
  printf("original values are %d %d\n",a,b);
  x=&a;
  y=&b;
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("after swapping\n");
  printf("%d\t%d",*x,*y);
  return 0;
}

  
