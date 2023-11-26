#include<iostream.h>
#include<conio.h>

class MyClass3{
	public:
	int data;
	MyClass3(int value){
	data=value;
	}
	~MyClass3(){
	cout<<"Destructor called for "<<data<<endl;
	}
};
int main(){
clrscr();
{
MyClass3 obj1(28);
{
MyClass3 obj2(4);
}
}
getch();
return 0;
}