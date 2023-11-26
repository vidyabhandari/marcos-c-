#include<stdio.h>
#include<conio.h>

int main(){

	int a;
	clrscr();

	printf("Enter the Year: ");
	scanf("\n%d",&a);

	if(a%4==0)
	{
	printf("\n%d is a Leap Year!",a);
	}
	else{
	printf("\n%d is not a Leap Year!",a);
	}
getch();
return 0;
}