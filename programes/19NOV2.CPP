#include<iostream.h>
#include<conio.h>

int main(){

int a1[5]={1,2,3,4,5};
int a2[5];
int i=0;
int j=0;
clrscr();
while(i<=4){
	  a2[j]=a1[i];
	 // i--;
	 // j++;
}
for(j=0;j<=4;j++){
cout<<a2[j];
}
getch();
return 0;
}