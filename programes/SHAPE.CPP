#include<iostream.h>
#include<conio.h>
class Shape{
	public:
	Shape(){
	cout<<"Shape constructor."<<endl;
	}
	void draw(){
	cout<<"Drawing a shape."<<endl;
	}
};
class Circle:public Shape{
public:
	Circle(){
	cout<<"Circle constructor."<<endl;
	}
	void draw(){
	cout<<"Drawing a Circle."<<endl;
	}
};
int main(){
clrscr();
Shape sh;
Circle cir;
sh.draw();
cir.draw();
getch();
return 0;
}
