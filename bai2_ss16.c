#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(){
	int n;
	printf ("nhap so can tinh giai thua: ");
	scanf ("%d",&n);
	printf ("giai thua cua %d la %d",n,giaithua(n));
	return 0;
}
int   giaithua (int n){
if (n==1)
return 1;

	return n*giaithua(n-1);
}
