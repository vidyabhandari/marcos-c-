#include<iostream.h>
#include<conio.h>

class Base{
public:
	void print(){
	cout<<"Printing from the base class."<<endl;
	}
};
class Derived:public Base{
public:

};
int main(){
clrscr();
Base b;
Derived d;

b.print();
d.print();
getch();
return 0;
}