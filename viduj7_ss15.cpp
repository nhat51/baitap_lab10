#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
 
 main() {
	int x,y,*px,*py; 
	int swap(int *px,int *py);
	/* storing address of x in *px */
	px=&x;
	/* storing address y of in *py */
	py =&y;
	x=15;
	y=20;
printf ("x=%d,y=%d",x,y);
swap (px, py);

	printf ("\n after interchanging x=%d,y=%d",x,y);
	
}
swap (int *u,int *v)
{
	int temp;
	temp=*u;
	*u=*v;
	*v=temp;
	return (temp);
}

