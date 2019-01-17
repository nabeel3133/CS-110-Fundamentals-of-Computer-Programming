#include<stdio.h>
int main()
{
	int i,j;
	int k;
	int x,q;
	for(i=1;i<=16;i++)
	{
	printf("\t\t\t%2d",i);
    }
    printf("\n\n");
	int p=1;
	printf("%d",p);
	for(k=1;k<=16;k++)
	{
	printf("\t\t %2d x %2d = %2d",p,k,p*k);
	}
    printf("\n\n");
	for(x=2;x<=16;x++)
    {
	printf("%d",x);
	for(j=1;j<=16;j++)
	{
    printf("\t\t %2d x %2d = %2d",j,x,x*j);
	}
	printf("\n\n");
    }  
    return 0;
}

