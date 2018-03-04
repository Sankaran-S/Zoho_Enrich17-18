#include <stdio.h>

int main(void) {
    //decleration
	int arr[100],n,count[100][2]={0},size=0,i,present,j;
	
	//input
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	//logic
	for(i=0;i<n;i++)
	{
	    present=0;
	    for(j=0;j<size;j++)
	    {
	        if(arr[i]==count[j][0])
	        {
	            count[j][1]++;
	            present=1;
	            break;
	        }
	    }
	    if(present==0)
	    {
	        count[size][0]=arr[i];
	        count[size][1]=1;
	        size++;
	    }
	}
	
	//Output
	for(i=0;i<size;i++)
	{
	    printf("%d --> %d\n",count[i][0],count[i][1]);
	}
	return 0;
}

