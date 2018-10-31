// this is a program to check whether a number is odd or even
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);//reading the number to be checked 
if(n%2==0)//check whether number is divisible by two
printf("Even\n");
else
printf("Odd\n");
return 0;
}
