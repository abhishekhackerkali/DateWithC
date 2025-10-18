/*
 ============================================================================
 Name        : sample_input.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	setbuf(stdout,NULL);
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Entered value is : %d",a);
	return EXIT_SUCCESS;
}
