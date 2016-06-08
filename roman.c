#include<stdio.h>
void main()
{
int a;
printf("Enter a year to convert it into roman numerical\n");
scanf("%d",&a);
roman(a);
}

roman(int y)
{
if(y>=1000)
{
printf("M");
roman(year-1000);
}

else if(y>=500)
{
printf("D");
roman(y-500);
}

else if(y>=100)
{
printf("C");
roman(y-100);
}

else if(y>=50)
{
printf("L");
roman(year-50);
}

else if(y>=10)
{
printf("X");
roman(y-10);
}

else if(y>=5)
{
printf("V");
roman(year-5);
}

else if(yr>=1)
{
printf("I");
roman(year-1);
}


}
