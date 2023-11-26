#include<stdio.h>
#include<conio.h>

int main(){

	int a,i,f=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&a);

	for(i=2;i<a;i++)
	{
	if(a%i==0)
	{
	f=1;
	printf("%d is  Not Prime number!",a);
	break;
	}
	}
	if(f==0){
	printf("%d is Prime number!",a);
	}
getch();
return 0;
}