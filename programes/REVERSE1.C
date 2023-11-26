#include<stdio.h>
#include<conio.h>

int reverseNumber(int num){
	int reversedNum = 0;

	while(num!=0){
	int remainder = num%10;
	reversedNum = reversedNum * 10 + remainder;
	num /=10;
	}
	return reversedNum;
}
int main(){
	int num;
	int reversed;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);
	reversed = reverseNumber(num);
	printf("The Reversed number is: %d\n",reversed);
getch();
return 0;
}