#include<stdio.h>
#include<conio.h>
main()
{
int a=9; 	
int b=26;		
printf("BEFORE SWAPPING THE VALUE IS A&B");
printf("\nA is %d",a);
printf("\nB is %d",b);
printf("\n AFTER SWAPPING THE VALUE IS A&B");	
a=a+b;	
b=a-b;	
a=a-b;	
printf("\nA is %d",a);	
printf("\nB is %d",b);	
getch();	
}