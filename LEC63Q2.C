#include<stdio.h>
#include<conio.h>
void main(){
int num,i,sum=1;
clrscr();
	printf("Enter any number:-");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	printf("%d\n",i);
	sum=sum*i;
	}
	printf("sum is %d",sum);
getch();
}