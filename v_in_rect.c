#include<stdio.h>
void main(){
	int i,j,k,l;
	for(i=5;i>=1;i--)
	{for(j=5;j>=i;j--)
	{printf("*");}
	for(k=i*2-2;k>=1;k--)
	{printf(" ");}
	for(l=5;l>=i;l--)
	{printf("*");}
	printf("\n");
	}
}