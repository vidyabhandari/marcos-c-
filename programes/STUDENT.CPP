#include<iostream.h>
#include<conio.h>

class Student{
public:
char name[10];
int age;
}

int main(){
	Student student;
	cout<<"enter student's name: "<<endl;
	cin>>student.name;
	cout<<"enter student's age: "<<endl;
	cin>>student.age;

	cout<<"Student Details: "<<endl;
	cout<<"Name: "<<student.name<<endl;
	cout<<"Age: <<"<<student.age<<endl;
getch();
return 0;
}