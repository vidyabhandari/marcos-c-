#include<iostream.h>
#include<conio.h>

int main(){
int a[4][4];
int b[4][4];
int c[4][4];
int i;
int j;
clrscr();
cout<<"Enter 4*4 matrix: ";
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	cin>>a[i][j];
	}
}
cout<<"Enter another 4*4 matrix: ";
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	cin>>b[i][j];
	}
}

for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	c[i][j]=a[i][j]*b[i][j];
	}
}
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	cout<<"\nThe sum of "<<a[i][j]<<" "<<b[i][j]<<" arrays: "<<c[i][j];
}
}
getch();
return 0;
}