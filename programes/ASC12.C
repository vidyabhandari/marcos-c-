#include<stdio.h>
#include<conio.h>

void valuebyref(int *a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("The value of a after swapping is: %d\n",*a);
	printf("The value of b after swapping is: %d\n",*b);
}
int main(){
	int a,b;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	valuebyref(&a,&b);
getch();
return 0;
}