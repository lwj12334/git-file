#include<stdio.h>
int main()
{ int a;
	printf("输入数字：");
	scanf("%d",&a);
	if(a%2==1)
	{
	if(a==3||a==5)
	printf("素数");
	else 
	{
	if(a%3==0||a%5==0)
	printf("非素数");
	else
	printf("素数") ;
	 
}
} 
else
{if(a==2)
printf("素数");
else
printf("非素数") ; 
}
}
