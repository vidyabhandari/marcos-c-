#include<stdio.h>
#include<conio.h>

int max(int a,int b){
	if(a>b){
	return a;
	}
	else
	{
	return b;
	}
}
int main(){
	int num1 = 18, num2 =10;
	int maximum = max(num1,num2);
	clrscr();
	printf("Maximum: %d\n",maximum);
getch();
return 0;
}