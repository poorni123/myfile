#include<stdio.h>
int main()
{
int a,b,t;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("After swapping:first num=%d",a);
printf("After swappinng:second num=%d",b);
}
