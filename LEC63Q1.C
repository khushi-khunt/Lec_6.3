#include<stdio.h>
#include<conio.h>
void main(){
int num,i,sum=0;
clrscr();
printf("Enter any number:-");
scanf("%d",&num);
	for(i=1;i<=num;i++){
	if(num%2==0){
	printf("%d\n",i);
	sum=sum+i; }
	}
    printf("sum is %d",sum);

getch();
}