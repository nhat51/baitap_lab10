#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
area (float r){
	float area;
	area=r*r*3.14;
	return area;
}
 pertimeter(float r){
	float pertimeter;
	pertimeter=2*r*3.14;
	return pertimeter;
}

int main() {
	float r,*pr;
	float a,b;
	printf ("enter circle's radius: ");
	scanf ("%f",&r);
	
	pr=&r;
	a=area(r);
	printf ("\n area of circle is: %.2f\n",a);
	b=pertimeter(r);
	printf ("\n pertimeter if circle is:%.2f\n",b);
	return 1;
}

