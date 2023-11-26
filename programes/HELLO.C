#include<stdio.h>
#include<conio.h>

int main(){
	float a,b,c;
	clrscr();
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("\nEnter the value of b:");
	scanf("%f",&b);
	c=a+b;

	printf("\nThe sum of a and b is: %f",c);
	getch();
	return 0;
}