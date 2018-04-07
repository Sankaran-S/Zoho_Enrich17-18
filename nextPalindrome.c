#include <stdio.h>
#include <math.h>

int topalindrome(int n)
{
    int temp=n,len=0,a,b,x=1,y;
    while(temp>0)
    {
        len++;
        temp=temp/10;
        x=x*10;
    }
    x=x/10;
    y=1;
    for(int i=1;i<=len/2;i++)
    {
        a=n/x;
        a=a%10;
        b=n/y;
        b=b%10;
        if(a<b)
        {
            n=n+y*10;
            a++;
        }
        n=n+(a-b)*y;
        x=x/10;
        y=y*10;
    }
    return n;
}

int main(void) {
	int a;
	scanf("%d",&a);
	printf("%d",topalindrome(a+1));
	return 0;
}
