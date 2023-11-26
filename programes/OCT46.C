#include<stdio.h>
#include<conio.h>

int main(){

	int month;
	printf("enter a month(1-12): ");
	scanf("%d",&month);

	switch((month-1)/3){
	case 0:printf("Winter\n");
		break;
	case 1:printf("Spring\n");
		break;
	case 2:printf("Summer\n");
		break;
	case 3:printf("Autum fall\n");
		break;
	default:printf("Invalid input");
	}
getch();
return 0;
}