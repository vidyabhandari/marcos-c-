#include<stdio.h>
#include<conio.h>

void printTable(int number,int range)
	{
	int i;
	printf("Multiplication table for %d:\n",number);

	for(i=1;i<=range;i++){
	printf("%d X %d = %d\n",number,i,range*i);
	}
}
int main(){
	 int num,range;
	 clrscr();
	 printf("Enter a number: ");
	 scanf("%d",&num);

	 printf("Enter a range: ");
	 scanf("%d",&range);

	 printTable(num,range);
getch();
return 0;
}