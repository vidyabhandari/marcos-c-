#include<stdio.h>
#include<conio.h>

int simpleintrest(int p,int r,int t){
	return p*r*t/100;
}
int main(){

	int simple,p,r,t;
	clrscr();
	printf("Enter the Principle,Rate of Intrest and Time period: \n");
	scanf("%d\n%d\n%d",&p,&r,&t);

	simple=simpleintrest(p,r,t);
	printf("The Simple Intrest is: %d",simple);

getch();
return 0;
}