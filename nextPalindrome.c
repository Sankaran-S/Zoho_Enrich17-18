#include <stdio.h>
#include <math.h>

int topalindrome(int n)
{
    int temp=n,len=0,a,b,x=1,y;
    //to find the length of the number;
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
	//to find the left side of the number
        a=n/x;
        a=a%10;
	//to find the right side of the number
        b=n/y;
        b=b%10;
	//incrementing the number based on the comparison of the left and right side
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
	//to find the next nearest palindrome
	printf("%d",topalindrome(a+1));
	return 0;
}
