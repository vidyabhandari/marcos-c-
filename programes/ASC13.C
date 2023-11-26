#include<stdio.h>
#include<conio.h>

void memadd(int *a){
	*a;
	printf("The memory address of a is: %d\n",&a);

}
int main(){
	int a=6;
	clrscr();
	memadd(&a);
getch();
return 0;
}