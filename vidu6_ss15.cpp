#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
int x,y;
int swap(int x,int y);
x=15;
y=20;
printf ("x=%d , y=%d",x,y);
swap (x,y);
printf ("\n after interchanging x=%d,y=%d\n",x,y);
}
swap (int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	return (temp);
}
