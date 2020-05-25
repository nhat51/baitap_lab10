#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int a,b,c,sum;
printf ("enter three number: ");
scanf ("%d %d %d",&a,&b,&c);
sum=caculatesum(a,b,c);
printf ("\n sum=%d",sum);
return 0;
}
caculatesum(int x,int y, int z){
	int d;
	d=x+y+z;
	return (d);
}
