// program for dynamic kite
#include<stdio.h>
void main(){
	int i,j,k,n,row1,row2;
	printf("Enter nmber of row and xols in odd:");
	scanf("%d",&n);
	row1=n/2+1;
	row2=n-row1;
	for(i=1;i<=row1;i++)
	{for(j=row1;j>i;j--)
	{printf(" ");}
	for(k=1;k<=i*2-1;k++)
	{printf("*");}
	printf("\n");
	}
	for(i=row2;i>=1;i--)
	{for(j=row2;j>=i;j--)
	{printf(" ");}
	for(k=i*2-1;k>=1;k--)
	{printf("*");}
	printf("\n");
	}
}