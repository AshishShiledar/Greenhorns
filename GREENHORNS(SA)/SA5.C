#include<stdio.h>
#include<conio.h>

main()
{
char name [9];	
int HISTORY,GEOGRAPHY,PHYSICS;
int total;
float per;
printf("\n ENTER YOUR NAME : ");
scanf("%s",& name);
printf("\n ENTER HISTORY MARKS : ");
scanf("%d",& HISTORY);
printf("\n ENTER GEOGRAPHY MARKS : ");
scanf("%d",& GEOGRAPHY);
printf("\n ENTER PHYSICS MARKS : ");
scanf("%d",& PHYSICS);
total= HISTORY + GEOGRAPHY + PHYSICS;
printf("\n the total is= %d" , total);
per = total*100/300;
printf("\n----------------------- : ");
printf("\n MY NAME IS ,%s ",name);
printf("\n HISTORY MARKS, %d ",HISTORY);
printf("\n GEOGRAPHY MARKS, %d ",GEOGRAPHY);
printf("\n PHYSICS MARKS, %d ",PHYSICS);
printf("\n per, %lf ",per);
getch();	 	
 }
 
 
 

 