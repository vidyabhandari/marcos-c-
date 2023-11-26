#include<stdio.h>
#include<conio.h>

int main(){

	int i,n;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==1)
	{
	printf("\n%d is odd!",i);
	}
	}
getch();
return 0;
}