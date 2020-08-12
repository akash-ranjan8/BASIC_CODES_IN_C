#include<stdio.h>
int findMaxNum(int arr[], int n) 
{    int t;
    //sorting in descending order
    for(int i=0;i<n;++i)
	{ for(int j=i+1;j<n;++j)
		{ if(arr[i]<arr[j])
			{ t=arr[i];
		      arr[i]=arr[j];
			  arr[j]=t;
			}
		}
	}
      
    int num = arr[0]; 
      
    
    for(int i=1; i<n; i++) 
    { 
        num = num*10 + arr[i]; 
    } 
      
    return num; 
} 
int main()  
{   
    int t;
	printf("enter the no. of test cases\n");
	scanf("%d",&t);
	for(int i=1;i<=t;++i)
    {
		int n;
		scanf("%d",&n);
		int a[n];
		for(int j=0;j<n;++j)
	    { 
	      scanf("%d",&a[j]);
		}
		int k=findMaxNum(a,n);
		printf("%d\n",k);
    }
	return 0;
}
