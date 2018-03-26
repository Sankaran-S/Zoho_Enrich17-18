#include <stdio.h>
#include <string.h>

int noOfVariables(char s[10],char a[5],char b[4])
{
    int count=0,j=1;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!='+'&&s[i]!='.'&&s[i]!='('&&s[i]!=')')
        {
            a[count]=s[i];
            count++;
        }
        else
        {
            b[j++]=s[i];
        }
    }
    return count;
}

int main(void) {
	char e[10],var[5],operat[5]={'0'};
	int n=0,t,a,k;
	//input
	scanf("%s",e);
	//Finding the number of variables, variables and operators
	n=noOfVariables(e,var,operat);
	//header
	for(int i=0;i<n;i++)
	{
	    printf("%c ",var[i]);
	}
	printf("%s",e);
	printf("\n");
	//Table
	for(int i=0;i<(1<<n);i++)
	{
	    a=1;
	    k=0;
	    for(int j=n-1;j>=0;j--)
	    {
	        t=(i>>j)&1;
	        printf("%d ",t);
	        if(operat[k]=='+')
	        {
	            a=a|t;
	        }
	        else if(operat[k]=='.')
	        {
	            a=a&t;
	        }
	        else
	        {
	            a=t;
	        }
	        k++;
	    }
	    printf("%d",a);//Output
	    printf("\n");
	}
	return 0;
}

