#include <stdio.h>

void subsets(int a[20],int n)
{
    for(int k=0;k<n;k++)
	{
	    for(int i=1<<k;i<(1<<(k+1));i++)
	    {
	        for(int j=0;j<=k;j++)    
	        {
	            if(i & (1<<j))
	            {
			    printf("%d", a[j]);
	            }
	        }
	        printf("\n");
	    }
	}
}

int main(void) {
	int a[20],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	subsets(a,n);
	return 0;
}

