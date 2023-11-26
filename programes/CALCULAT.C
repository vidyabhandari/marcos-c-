#include<stdio.h>
#include<conio.h>

int main(){

	float a,b;
	char op;
	float result;
	clrscr();
	printf("\nEnter first number,operator and second number:");
	scanf("%f%c%f",&a,&op,&b);

	switch(op){
		case '+':
		result=a+b;
		break;

		case '-':
		result=a-b;
		break;

		case '*':
		result=a*b;
		break;

		case '/':
		result=a/b;
		break;

		default:
			printf("\nInvalid operator:");
			return 1;
	}
	printf("Result: %.2f\n",result);

getch();
return 0;
}