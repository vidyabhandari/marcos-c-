#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	int num;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
	printf("\n%d X %d = %d",num,i,num*i);
	}
getch();
return 0;
}