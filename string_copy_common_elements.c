//check common characters of two character array and then storing it into into a new character array and then deleting the duplicate ones from new character array
#include<stdio.h>
#include<string.h>
char *removeDuplicate(char str[], int n) 
{ 
   
   int index = 0;    
   for (int i=0; i<n; i++) { 
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
       
    
     if (j == i) 
        str[index++] = str[i]; 
   } 
     
   return str; 
} 
int main()
{ char str1[100],str2[100],str[100];
  int i,j,d;
  d=0;
  printf("enter the strings\n");
  fgets(str1,sizeof(str1),stdin);
  fgets(str2,sizeof(str2),stdin);
  int l1=strlen(str1);
  int l2=strlen(str2);
  if(l1>=l2)
  { for(i=0;i<l2;++i)
    { for(j=0;j<l1;++j)
      { if(str1[j]==str2[i])
        {   str[d]=str1[i];
            ++d;
        }
      }
    }
   }
   else
   { for(i=0;i<l1;++i)
    { for(j=0;j<l2;++j)
      { if(str2[j]==str1[i])
        {   str[d]=str1[i];
            ++d;
        }
      
      }
    }
   }
   str[d]='\0';
   int n = sizeof(str) / sizeof(str[0]); 
   printf("%s",removeDuplicate(str, n));
  return 0;
}
    
