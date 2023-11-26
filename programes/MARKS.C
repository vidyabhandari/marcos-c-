#include<stdio.h>
#include<conio.h>

int main(){
	int marks;
	clrscr();
		 printf("Enter your marks: \n");
		 scanf("%d",&marks);

		 if(marks>=35){
			if(marks>=90){
			printf("You scored grade A!\n");
			}else if(marks < 90 && marks>=75){
			printf("You scored grade B!\n");
			}else if(marks > 75 && marks>=60){
			printf("YOu scored grade C!\n");
			}else if(marks<60 && marks>=35){
			printf("You scored grade D!\n");
			}
		 }
		 else{
			printf("You are failed!");
		 }
	getch();
	return 0;
}
