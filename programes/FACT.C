#include<stdio.h>
#include<conio.h>

int main(){
	 int num,i;
	 unsigned long long factorial=1;
	 clrscr();
	 printf("Enter a positive number: ");
	 scanf("%d",&num);

	 if(num<0){
		printf("Factorial is not defined for negative number.\n");
	 }
	 else{
	 for(i=1;i<=num;i++){
	 factorial*=i;
	 }
	 printf("Factorial of %d is %llu\n",num,factorial);
	 }
getch();
return 0;
}