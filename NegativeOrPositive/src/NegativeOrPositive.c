/*
 ============================================================================
 Name        : NegativeOrPositive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("Enter a integer:");
	scanf("%d",&num);
	if(num<0){
		printf("Entered value is negative");
	}
	else if(num>0){
		printf("Entered value is positive");
	}
	else{
		printf("Entered value is zero");
	}
	return EXIT_SUCCESS;
}
