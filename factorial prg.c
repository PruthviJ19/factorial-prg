#include<stdio.h>
#include<conio.h>
main()
{
	int n,f;/*initilize i*/
	printf("enter numb");/*number to be factorial*/
	scanf("%d",&n);
	f=fact(n);/*formula*/
	printf("factorial valu is %d",f);
	getch();
}

int fact(int n)/*call by value function*/
{
	int i,fa=1;/*initilize i,fa*/
	for(i=n;i>=1;i--)/*condition for i loop*/ 
	fa=fa*i;/*if condition is true*/
	return fa;
}
