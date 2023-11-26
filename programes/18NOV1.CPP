#include<iostream.h>
#include<conio.h>

int main(){
int a[10];
int b[10];
int c[10];
int i;
clrscr();
cout<<"Enter 10 values: ";
for(i=0;i<10;i++){
cin>>a[i];
}
/*
cout<<"\nThe 10 values: ";
for(i=0;i<10;i++){
cout<<a[i]<<endl;
}
*/
i=0;
cout<<"\nEnter another 10 values: ";
while(i<10){
cin>>b[i];
i++;
}
/*
cout<<"\nThe another 10 values: ";
while(i<10){
cout<<b[i];
i++;
}
*/
i=0;
while(i<10){
c[i]=a[i]+b[i];
i++;
}
for(i=0;i<10;i++){
cout<<a[i]<<b[i]<<c[i];
cout<<" ";
}
getch();
return 0;
}