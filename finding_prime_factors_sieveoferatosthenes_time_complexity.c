#include<stdio.h>
#include<time.h>
int main()
{ int num,i,j;
  printf("enter the number\n");
  scanf("%d",&num);
  clock_t t;
  t=clock();
  int primes[num+1];
  //STORING NATURAL NUMBER TO PRIMES
  for(i=2;i<=num;++i)
  { primes[i]=i;
  }
  i=2;
  while((i*i)<=num)
  {  if(primes[i]!=0)
     { for(j=2;j<num;++j)
       { if(primes[i]*j>num)
         { break;
         }
         else
         { primes[primes[i]*j]=0;
         }
        }
      }
      ++i;
   }
   printf("\nPRIME FACTORS ARE AS FOLLOWS\n");
   for(i=2;i<=num;++i)
   { if(primes[i]!=0)
     { printf("%d\t",primes[i]);
     }
   }
   t=clock()-t;
   double time_taken=((double)t)/CLOCKS_PER_SEC;
   printf("\nTIME TAKEN: %f\n",time_taken);
   return 0;
}
