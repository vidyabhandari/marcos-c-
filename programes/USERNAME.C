#include<stdio.h>
#include<conio.h>

int main(){
	char name[50];
	clrscr();
	printf("Enter your username (one word): ");
	scanf("%s",name);
	printf("your username is: %s\n",name);
getch();
return 0;
}