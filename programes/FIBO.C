#include<stdio.h>
#include<conio.h>

int main(){
	 int num,first=0,second=1,next;
	 clrscr();
	 printf("Enter a number: ");
	 scanf("%d",&num);

	 printf("Fibonacci series up to %d: ",num);
	 printf("%d,%d",first,second);

	 next=first+second;
	 while(next<=num)
	 {
	 printf(",%d",next);
	 first=second;
	 second=next;
	 next=first+second;
	 }
	 printf("\n");
getch();
return 0;
}