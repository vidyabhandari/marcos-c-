#include<iostream.h>
#include<conio.h>

void ExampleFunction(){
	int count=0;
	count++;
	cout<<"Call "<<count<<endl;
}
int main(){

ExampleFunction();
ExampleFunction();
ExampleFunction();
getch();
return 0;
}