#include <stdio.h>
#include <string.h>

void substrings(char s[20])
{
    char sub[20],ans[20]="";
	int a[127]={0},j=0,i,n;
    n=strlen(s);
	for(i=0;i<n;i++)
	{
	    if(a[(int)s[i]]!=0)
	    {
	        if(j>=strlen(ans))
	        {
	            sub[j]='\0';
	            strcpy(ans,sub);
	        }
	        j=0;
	        memset(a,0,sizeof(a));
	    }
	    a[(int)s[i]]=1;
	    sub[j]=s[i];
	    j++;
	}
	if(j>strlen(ans))
	{
	    sub[j]='\0';
	    strcpy(ans,sub);
	}
	printf("%s",ans);
}

int main(void) {
	char s[20];
	scanf("%s",s);
	substrings(s);
}


