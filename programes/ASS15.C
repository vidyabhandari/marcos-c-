
#include<stdio.h>
#include<conio.h>

int square(int a,int b,int s,int mul){
     s=a+b;
     mul=s*s;
     printf("(a+b)^2=%d\n",mul);
     return 0;
}
int main(){

int a,b,s,mul;
clrscr();
printf("Enter value of a: ");
scanf("%d",&a);
printf("Enter value of b: ");
scanf("%d",&b);
square(a,b,s,mul);
getch();
return 0;
}