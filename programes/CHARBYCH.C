#include<stdio.h>
#include<conio.h>

int main(){

	char name[6];
	int i=0;
	char ch;
	clrscr();
	printf("Enter your names one character at a time(press Enter at each charater)");

	while(1){
	ch = getchar();

	if(ch=='\n'||i==5){
	break;
	}
	name[i]=ch;
	i++;
	}
	name[i]='\0';
	printf("Your name is: %s\n",name);
getch();
return 0;
}