#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	register int i;
	int no,digit,sum;
	printf("\n the numbers who sum of cubes of digits is equal to the nuumber itself are: \n\n");
	for (i=1;i<999;i++)
	{	sum=0;
		no=i;
	while (no)
	{ 
		digit=no%10;
		no=no/10;
		sum=sum+digit*digit*digit;
	}
	if (sum==i)
	printf ("%d\n",i);
	}
}
