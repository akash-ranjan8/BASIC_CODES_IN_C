#include<stdio.h>
#include<string.h>
struct info
{ int roll_no;
  char name[50];
  float CGPA;
};
void display(struct info *new)
{ 
  printf("ROLL NO.= %d\n",new->roll_no);
  printf("NAME: %s\n",new->name);
  printf("CGPA: %f\n",new->CGPA);
  
}
int main()
{ int i,n;
  printf("enter the no. of students\n");
  scanf("%d",&n);
  struct info new[n];
  for(i=0;i<n;++i)
  { printf("enter the roll ,cgpa ,name\n");
    scanf("%d",&new[i].roll_no);
    scanf("%f",&new[i].CGPA);
    scanf("%s",new[i].name);
  }
  for(i=0;i<n;++i)
  { display(&new[i]);
  }
  return 0;
}
  
   
