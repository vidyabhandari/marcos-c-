#include<stdio.h>
#include<conio.h>

void valuebyadd(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a after swapping is :%d\n",a);
	printf("The value of b after swapping is :%d\n",b);
}
int main(){
	int a,b;
	clrscr();
	printf("The value of a is:");
	scanf("%d",&a);
	printf("\nThe value of b is:");
	scanf("%d",&b);
	valuebyadd(a,b);
getch();
return 0;
}
