#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() 
{
		int i;
		int squarer(int i);
	for (i=1;i<=10;i++)
	printf ("\n square of %d is %d",i,squarer(i));
}
    int squarer(int x)
 	
	{
		int j;
		j=x*x;
	return (j);	
	}
	

