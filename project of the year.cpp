#include<stdio.h>
#include<string.h>
int daynum(int year,int month,int day){
static int t[100]={0,3,2,5,0,3,5,1,4,6,2,4};
year-=month<3;
return(year+year/4-year/100+year/400+
t[month-1]+day)%7;
}
char *monthname(int monthnum){
char *month;
switch(monthnum){
case 0:month="January";
break;
case 1:month="February";
break;
case 2:month="March";
break;
case 3:month="April";
break;
case 4:month="May";
break;
case 5:month="June";
break;
case 6:month="July";
break;
case 7:month="August";
break;
case 8:month="September";
break;
case 9:month="October";
break;
case 10:month="November";
break;
case 11:month="December";
break;
}
return month;
}
int numdays(int monthnum,int year){
if(monthnum==0)
return 31;
if(monthnum==1){
if(year%400==0||(year%4==0&& year%100!=0))
return 29;
else 
return 28;}
if(monthnum==3)
return 30;
if(monthnum==4)
return 31;
if(monthnum==5)
return 30;
if(monthnum==6)
return 31;
if(monthnum==7)
return 31;
if(monthnum==8)
return 30;
if(monthnum==9)
return 31;
if(monthnum==10)
return 30;
if(monthnum==11)
return 31;
if(monthnum==2)
return 31;
}
void print(int year){
printf("\n\n calendar \n\n%d",year);
int days;
int current=daynum(1,1,year);
for(int i=0;i<12;i++){
days=numdays(i,year);
printf("\n-------%s-------\n",monthname(i));
printf("Sun mon tue wed thu fri sat \n");
int k;
for(k=0;k<current;k++)
printf("    ");

for(int j=1;j<=days;j++){
printf("%4d",j);
if(++k>6){
k=0;
printf("\n");
}
}
if(k){
printf("\n");
current=k;}
}
return ;
}
int main(){
int year;
printf("Enter the year u are looking for");
scanf("%d",&year);
print(year);
} 