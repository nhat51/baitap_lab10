#include <iostream>
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void check(char *a, char *b, int (*cmp)());
 int main() {
 	char s1[80],s2[80];
 	int (*p)();
 
	 p = strcmp;
 	gets(s1);
 	gets (s2);
 	check (s1,s2,p);
 	
}
 void check(char *a,char *b,int (*cmp)()){
 	printf ("testing for equality \n");
 	if (!(*cmp)(a,b))
 	printf ("equal");
 	else 
 	printf ("not equal");
 }	
