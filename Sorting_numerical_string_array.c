#include <stdio.h>
#include <string.h>
int main(void) {
    //decleration
	char stringArray[10][10];
	int n,a[10],i,j,temp,num,negativeStatus,len;
	//input
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",stringArray[i]);
	}
	//numeric conversion
	for(i=0;i<n;i++)
	{
	    num=0;
	    negativeStatus=0;
	    len=strlen(stringArray[i]);
	    j=0;
	    if(stringArray[i][0]=='-')
	    {
	        negativeStatus=1;
	        j=1;
	    }
	    while(j<len)
	    {
	        num=num*10+(stringArray[i][j]-'0');
	        j++;
	    }
	    if(negativeStatus==1)
	    {
	        num=num*-1;
	    }
	    a[i]=num;
	}
	//sorting
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[j]<a[i])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
	//output
	printf("[\"%d\"",a[0]);
	for(i=1;i<n;i++)
	{
	    printf(",\"%d\" ",a[i]);
	}
	printf("]");
	return 0;
}

