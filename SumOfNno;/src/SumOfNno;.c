/*
 ============================================================================
 Name        : SumOfNno;.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum=sum+i;
	}
	printf("Sum of entered number is %d \n",sum);
	printf("MISSION CLOSED");
	return EXIT_SUCCESS;
}
