/*
 ============================================================================
 Name        : average_of_3_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3,ave;
	setbuf(stdout,NULL);
	puts("Enter 3 value:");
	scanf("%f%f%f",&num1,&num2,&num3);
	ave=(num1+num2+num3)/3;
	printf("Average is : %f",ave);
	return EXIT_SUCCESS;
}
