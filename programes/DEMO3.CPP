#include<iostream.h>
#include<conio.h>

class Demo
{
		int n,l=0;
		public:
	Demo(void)
		{
		readNo(void);
		}
	void factorial(void)
	{
	int a=n;
	int i=1;
	while(a>0)
	{
		i=i*a;
		a--;
		l++;
	}
	cout<<"Factorial of "<<n<<"is"<<i;
	private:
	void readNo(void)
	{
	cout<<"Enter a number: ";
	cin>>n;
	}
};

int main()
{
clrscr();
Demo d=demo(void);
d.factorial(void);
getch();
return 0;
}