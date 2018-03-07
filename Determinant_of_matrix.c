#include <stdio.h>

int main(void) {
    //decleration
	float a[10][10]={0},temp,det=1;
	int n,i,j,k;
    //input
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    //to find upper triangular matrix
	for(i=1;i<n;i++)
	{
	    for(j=0;j<i;j++)
	    {
	        if(a[i][j]!=0)
	        {
	            temp=a[i][j]/a[j][j];
	        }
	        else
	        {
	            temp=0;
	        }
	        for(k=j;k<n;k++)
	        {
	            a[i][k]=a[i][k]-a[j][k]*temp;
	        }
	    }
	}
	//to calculate determinant
	for(i=0;i<n;i++)
	{
	    det=det*a[i][i];
	}
	//output
	printf("%.2f",det);
	return 0;
}

