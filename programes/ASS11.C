#include<stdio.h>
#include<conio.h>

int areaoftraingle(int height,int base){
	return height*base/2;
}

int main(){
	int triangle;
	clrscr();
	triangle=areaoftraingle(3,5);
	printf("Area of triangle is: %d ",triangle);
getch();
return 0;
}