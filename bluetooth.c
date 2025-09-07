#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,l;
// code 1
for(l=1;l<=10;l++)
{ textcolor(l);
for(i=4,j=11;i<=9,j>=5;i++,j--)
{gotoxy(i,j);
printf("*");
for(k=0;k<=10000000;k++)
{}
}
// code 2	
for(i=9,j=4;i>=7,j>=2;i--,j--)
{gotoxy(i,j);
printf("*");
for(k=0;k<=10000000;k++)
{}
}
// code 3	
for(j=3;j<=13;j++)
{gotoxy(7,j);
printf("*");
for(k=0;k<=10000000;k++)
{}
}		
// code 4
for(i=8,j=12;i<=10,j>=10;i++,j--)
{gotoxy(i,j);
printf("*");
for(k=0;k<=10000000;k++)
{}
}		
// code 5	
for(i=9,j=9;i>=4,j>=4;i--,j--)
{gotoxy(i,j);
printf("*");
for(k=0;k<=10000000;k++)
{}
}		
}	
	
}