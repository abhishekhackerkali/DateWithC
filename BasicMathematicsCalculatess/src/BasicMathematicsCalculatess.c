/*
 ============================================================================
 Name        : BasicMathematicsCalculatess.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	setbuf(stdout,NULL);
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);
	printf("1 for Addition \n2 for Subtraction \n3 for Multiplication \n4 for Division \nEnter a choice");
	scanf("%d",&choice);
	if(choice==1){
		result=num1+num2;
	}
	else if(choice==2){
		result=num1-num2;
	}
	else if(choice==3){
		result=num1*num2;
	}
	else if(choice==4){
		result=num1/num2;
	}
	else{
		printf("You entered wrong choice \nPROGRAMME STOPED");
	}
	printf("Answer is %d",result);

	return EXIT_SUCCESS;
}
