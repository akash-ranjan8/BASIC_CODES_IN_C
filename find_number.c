#include <stdio.h>
void find_number(int num)
{
    
    int a[20], r, i = 0, j;
    while (num > 0) {
 
        r = num % 10;
        if (9 - r > r)
		{	
            a[i] = r;
        }
        else
        {    a[i] = 9 - r;
        }
        i++;
        num = num / 10;
    }
    if (a[i - 1] == 0) {
        printf("9");
        i--;
    }
 
   
      for(j = i - 1; j >= 0; j--)
	{   printf("%d",a[j]);
        }
}
 int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    find_number(num);
    return 0;
}
