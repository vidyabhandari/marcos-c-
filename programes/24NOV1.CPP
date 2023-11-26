#include<iostream.h>
#include<conio.h>

void function3(){
cout<<"It's Over\n";
}
void function2(){
function3();
cout<<"I am from function 2!\n";
cout<<"Closing function 2\n";
}
void function1(){
function2();
cout<<"I am from function 1!\n";
cout<<"Closing function 1\n";
}
int main(){
clrscr();
function1();
getch();
return 0;
}