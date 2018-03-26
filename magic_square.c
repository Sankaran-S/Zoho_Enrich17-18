#include<stdio.h>

void magicSquare(int n)
{
    int a[20][20]={0},i=0,j=n/2,num=1;
    a[i][j]=num++;
    while(num<=n*n)
    {
        if(a[(i-1+n)%n][(j+1)%n]==0)
        {
            i=(i-1+n)%n;
            j=(j+1)%n;
        }
        else
        {
            i=(i+1)%n;
        }
	a[i][j]=num++;
    }
    //output
    for(int p=0;p<n;p++)
    {
        for(int q=0;q<n;q++)
        {
            printf("%d ",a[p][q]);
        }
        printf("\n");
    }
}

int main() {
   int n;
   scanf("%d",&n);
   magicSquare(n);
   return 0;
}

