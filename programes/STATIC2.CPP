#include<iostream.h>
#include<conio.h>

class Myclass{
public:
	static int count;
	Myclass(){
	count++;
	}
};
int Myclass::count = 0;

int main(){
clrscr();
Myclass o1;
Myclass o2;
Myclass o3;

cout<<"Count: "<<Myclass::count<<endl;
getch();
return 0;
}