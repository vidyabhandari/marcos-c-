#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10];
	int large;
	int i;
	clrscr();
	printf("Enter 10 integers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	large = arr[9];
	for(i=8;i>=0;i--){
		if(arr[i]<large){
		large = arr[i];
		}
	}
printf("The smallest element in the array is: %d\n",large);
getch();
return 0;
}