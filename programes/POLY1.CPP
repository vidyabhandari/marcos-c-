#include<iostream.h>
#include<conio.h>

class Calculator{
public:

void add(char ch,char ch1){
cout<<"your character is "<<ch<<endl;
cout<<"Your another charcter is "<<ch1<<endl;
}
int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
}
double add(double a,double b){
	return a+b;
}
double add(int a,double b){
return a+b;
}
};
int main(){
clrscr();
Calculator cal;
cal.add('s','w');
cout<<cal.add(1,2)<<endl;
cout<<cal.add(1,2,4)<<endl;
cout<<cal.add(1.0,2.3)<<endl;
cout<<cal.add(1,1.4)<<endl;
getch();
return 0;
}