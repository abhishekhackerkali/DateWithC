/*
 ============================================================================
 Name        : PatternPrinting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=10;
	for(i=n;i>=0;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
