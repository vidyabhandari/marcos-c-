#include<iostream.h>
#include<conio.h>

class Car{
	public:
	char make[10];
	char model[10];
	int year;

	void displayInfo(){
		cout<<"Make: "<<make<<",Model: "<<model<<",Year: "<<year<<endl;
	}
};

int main(){

Car car1;
Car car2;
strcpy(car1.make,"toyota");
car1.make="Toyota";
car1.model="Camry";
car1.year=2022;

car2.make="honda";
car2.model="Civic";
car2.year=2021;

cout<<"Car 1 details: "<<endl;
car1.displayInfo();
cout<<"Car 2 deatils: "<<endl;
car2.displayInfo();
getch();
return 0;
}