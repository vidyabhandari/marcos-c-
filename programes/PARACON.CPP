#include<iostream.h>
#include<conio.h>

class MyClass1{
public:
	int data1;
	float data2;
	char data3;

	MyClass1(int val1,float val2,char val3){
	data1=val1;
	data2=val2;
	data3=val3;
	}
};
int main(){
clrscr();
MyClass1 obj1(5,3.8,'V');
MyClass1 obj2(28,0.4,'i');
MyClass1 obj3(23,0.6,'R');
cout<<"\t Object 1";
cout<<"\nParameterized constructor 1: "<<obj1.data1<<endl;
cout<<"Parameterized constructor 2: "<<obj1.data2<<endl;
cout<<"Parameterized constructor 3: "<<obj1.data3<<endl;
cout<<"\n\t Object 2";
cout<<"\nParameterized constructor 1:"<<obj2.data1<<endl;
cout<<"Parameterized constructor 2:"<<obj2.data2<<endl;
cout<<"Parameterized constructor 3:"<<obj2.data3<<endl;
cout<<"\n\t Object 3";
cout<<"\nParameterized constructor 1:"<<obj3.data1<<endl;
cout<<"Parameterized constructor 2:"<<obj3.data2<<endl;
cout<<"Parameterized constructor 3:"<<obj3.data2<<endl;
getch();
return 0;
}