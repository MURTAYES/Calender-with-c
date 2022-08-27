#include<stdio.h>
int firstDayOfYear(int year){
     int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
     return day;
  }

int main(){
 char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
 int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
 int i,j,totalDays,year,space=0,weekDays=0;

 printf("Enter the year: ");
 scanf("%d",&year);
printf("\n\nHere is the calender of **%d**",year);
 weekDays= firstDayOfYear(year);

 if((year%4==0)&&(year%100!=0) || (year%400==0)){ daysInMonth[1]=29; }


 for (i=0;i<12;i++){
   printf("\n\n\n------------------%s------------------\n\n",months[i]);
   printf("  Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
       for (space=1;space<=weekDays;space++){ printf("      ");}

   totalDays=daysInMonth[i];
   for (j=1;j<=totalDays;j++){
    weekDays++;
    printf("%6d",j);
    if(weekDays>6){ weekDays=0; printf("\n");}
   }
 }
 return 0;
}
