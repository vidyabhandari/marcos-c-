#include<iostream.h>
#include<conio.h>

class Circle{
public:
	double radius;

	double area(){
	return 3.14*radius*radius;
	}
	double circumference(){
	return 2*3.14*radius;
	}
};
int main(){

Circle circle;
clrscr();
cout<<"Enter the radius of the circle: ";
cin>>circle.radius;

cout<<"Circle Area: "<<circle.area()<<endl;
cout<<"Circle circumference: "<<circle.circumference()<<endl;
getch();
return 0;
}