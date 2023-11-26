#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	char str1[]="Hello ";
	char str2[]="World!!";
	char result[50];
	clrscr();

	strcpy(result,str1);
	strcat(result,str2);

	printf("Concatenated String: %s\n",result);
getch();
return 0;
}