#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<stdlib.h>

int main()
{
ofstream outf("ITEM.txt");
cout<<"Enter Item Name:";
char name[20];
cin>>name;
outf<<name<<"\n";
cout<<"Enter Item Cost:";
int cost;
cin>>cost;
outf<<cost;
outf.close();
ifstream inf("ITEM.txt");
inf>>name;
inf>>cost;
cout<<"Item name"<<name;
cout<<"Item cost"<<cost;
inf.close();
return 0;
}
