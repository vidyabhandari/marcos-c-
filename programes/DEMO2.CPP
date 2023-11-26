#include<iostream.h>
#include<conio.h>

class geometry
{
	int c,b;
	int area(int a)
		{
		c=b=a;
		return(c*b);
		}
	int area(int x,int p)
		{
		c=x;
		b=p;
		return(c*b);
		}
	int volume(int z)
		{
		c=z;
		return(c*c*c);
		}
};
void main()
{
clrscr();
geometry g;
g.area(10);
g.area(20,30);
g.volume(6);
getch();
}
