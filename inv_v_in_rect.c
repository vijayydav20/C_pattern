#include<stdio.h>
void main(){
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{for(j=5;j>=i;j--)
	{printf("*");}
	for(k=1;k<i*2-1;k++)
	{printf(" ");}
	for(l=5;l>=i;l--)
	{printf("*");}
	printf("\n");
	}
}