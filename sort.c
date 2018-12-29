#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={65,72,11,46,98,90,55,12,25,37};
int i,j,temp;
clrscr();
for(i=0;i<10;i++)
for(j=0;j<10;j++)
 if(a[i]<a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
/*j=0;
 printf("the lowest number is %d\n",a[0]);
 j=9;
 printf("the greatest numbers is%d\n",a[9]); */
 printf("sum is%d\n",a[0]+a[9]);
 for(j=0;j<10;j++)
 {
 printf("%d\n",a[j]);
 }
 getch();
 }

																	
