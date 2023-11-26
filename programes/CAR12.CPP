#include<iostream.h>
#include<conio.h>
#include<string.h>
class Car{
	public:
	char make[10];
	char model[10];
	int year;

	void displayInfo(){
		cout<<"Make: "<<make<<" ,Model: "<<model<<" ,Year: "<<year<<endl;
	}
};

int main(){
clrscr();
Car car1;
Car car2;
strcpy(car1.make,"Toyota");
strcpy(car1.model,"Camry");
//car1.make="Toyota";
//car1.model="Camry";
car1.year=2022;

strcpy(car2.make,"honda");
strcpy(car2.model,"Civic");
//car2.make="honda";
//car2.model="Civic";
car2.year=2021;

cout<<"Car 1 details:\n "<<endl;
car1.displayInfo();
cout<<"Car 2 deatils:\n "<<endl;
car2.displayInfo();
getch();
return 0;
}