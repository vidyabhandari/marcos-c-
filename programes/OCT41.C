#include<stdio.h>
#include<conio.h>

int main(){
int sourceArray[10]={1,2,3,4,5,6,7,8,9,10};
int destinationArray[10];
int i=0;
int j=9;
int temp;
clrscr();

while(i<j){
temp=sourceArray[i];
sourceArray[i]=sourceArray[j];
sourceArray[j]=temp;
i++;
j--;
}
printf("Copied Array: ");
for(i=0;i<10;i++){
printf("%d\t",sourceArray[i]);
}
printf("\n");
getch();
return 0;
}

