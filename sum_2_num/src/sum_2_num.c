/*
 ============================================================================
 Name        : sum_2_num.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,sum;
	setbuf(stdout,NULL);
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum is %d",sum);
	return EXIT_SUCCESS;
}
