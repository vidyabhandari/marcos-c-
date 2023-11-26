#include<iostream.h>
#include<conio.h>

class Swapper{
public:
void swap(int&a,int&b){
//int temp=a;
//a=b;
//b=temp;
       //a=10 b=5;
b=a+b;//b=10+5=15;
a=b-a;//a=15-10=5;
b=b-a;
}
void swap(double&a,double&b){
double temp=a;
a=b;
b=temp;
}
};
int main(){
clrscr();
Swapper s;
int x=10,y=5;
double a=3.14,b=2.71;

s.swap(x,y);
cout<<"Swapped integers: x="<<x<<", y="<<y<<endl;
s.swap(a,b);
cout<<"Swapped double: a= "<<a<<", b="<<b<<endl;
getch();
return 0;
}