#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30]="abcdefghijklmnopqrstuvwxyz";
int i;
clrscr();
strupr(a);
for(i=0;i<30;i++)
{
printf("%c\n",a[i]);
}
getch();
}
