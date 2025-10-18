/*
 ============================================================================
 Name        : ArrayInputOutput.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[100],limit,sk,flag;
	setbuf(stdout,NULL);
	printf("Enter array limit");
	scanf("%d",&limit);
	printf("Enter value");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered value are : ");
	for(i=0;i<limit;i++){
		printf("%d \t",a[i]);
	}
	printf("Enter a search key : ");
	scanf("%d",&sk);
	for(i=0;i<limit;i++){
		if(sk==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Value found at the position %d",i+1);
	}
	else{
		printf("Value not found");
	}
	return EXIT_SUCCESS;
}
