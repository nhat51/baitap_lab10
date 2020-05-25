#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	int a,b,c; // khai bao ba bien a,b,c
	int adder(int a,int b);
	a=b=c=0;  //gan gia tri cho ba bien a,b,c
	printf("\n enter 1st number: ");
	scanf ("%d",&a);//nhap vao so a
	printf ("\n enter 2nd number: ");
	scanf ("%d",&b);//nhap vao so b
	c = adder(a,b); //khai bao c = mang adder
	printf ("\n\n a&b in main() are: %d & %d",a,b);//in ra gia tri cua a va b trong ham main
	
	printf ("\n\n c in main() is: %d ",c);//in ra gia tri cua c trong ham main
}
adder (int a,int b)
{
	int c;
	c=a+b;
	a*=a;
	b+=5;
	printf ("\n\n a & b within adder function are: %d & %d",a,b);
	printf ("\n c within adder function: %d",c);
	return (c);
}

