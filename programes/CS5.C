#include<Stdio.h>
#include<conio.h>

int main(){
	 int n;
	clrscr();
	printf("Enter a character: ");
	scanf("%c",&n);

	if((n>='A' && n <='Z')||(n>='a'&& n<='z')){
		printf("%c is an Alphabet.",n);
	}
	else{
		printf("%c is not an alphabet.",n);
	}
getch();
return 0;
}