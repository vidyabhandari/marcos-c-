#include<stdio.h>
#include<conio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
float div(float a,float b){
	if(b!=0){
	return a/b;
	}
	else{
	printf("Error: Division by zero!\n");
	return 0;
	}
}
int mul(int a,int b){
	return a*b;
}
int main(){
	int result = add(5,3);
	int result1 = sub(10,5);
	float result2 = div(6,0);
	int result3 = mul(2,5);

	printf("Sum is %d\n",result);
	printf("Differnce is %d\n",result1);
	printf("Division is %f\n",result2);
	printf("Multiplication is %d\n",result3);
getch();
return 0;
}