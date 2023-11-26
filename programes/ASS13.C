#include<stdio.h>
#include<conio.h>

int percentage(int a,int b,int c,int d,int e,int total){
	int obtain=a+b+c+d+e;
	int tol=total;
       return  (obtain/tol)*100;
}
int main(){
	int a,b,c,d,e,obtain,total,marks;
	clrscr();
	printf("Enter the marks of 5 subjects:");
	printf("\nEnter the marks of English: ");
	scanf("%d",&a);
	printf("Enter the marks of Maths: ");
	scanf("%d",&b);
	printf("Enter the marks of social: ");
	scanf("%d",&c);
	printf("Enter the marks of science: ");
	scanf("%d",&d);
	printf("Enter the marks of IT: ");
	scanf("%d",&e);

	printf("Now, Enter the total marks: ");
	scanf("%d",&total);

	marks=percentage(a,b,c,d,e,total);
	printf("The Percentage is: %d",marks);

getch();
return 0;
}