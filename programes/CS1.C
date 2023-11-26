#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
	printf("\nThe number is even!");
	}
	else
	{
	printf("\nThe number is odd!");
	}
	getch();
	return 0;
}