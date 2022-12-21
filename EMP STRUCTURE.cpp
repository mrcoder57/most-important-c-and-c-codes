#include<stdio.h>
struct emp{
int empid[100];
char empname[100];
int empsalary[100];
char empdepot[100];

};
int main (){
struct emp e;
int n;
printf("enter the no of employees\n");
scanf("%d",&n);
for(int i=0;i<=n;i++){
printf("enter the employee id of %d th emp\n",i);
scanf("%d",&e.empid[i]);
printf("enter the name of %d th emp\n",i);
scanf("%s",&e.empname[i]);
printf("enter the department of %d th emp\n",i);
scanf("%s",&e.empdepot[i]);
printf("enter the salary of %d th emp\n",i);
scanf("%d",&e.empsalary[i]);
}
for(int j=0;j<=n;j++){
printf("the employee id of %d th emp is:\n",j);
printf("%d\n",e.empid[j]);
printf("the name of %d th emp is:\n",j);
printf("%c\n",e.empname[j]);
printf("the department of %d th emp is:\n",j);
printf("%c\n",e.empdepot[j]);
printf("the salary of %d th emp is:\n",j);
printf("%d\n",e.empsalary[j]);
}
return 0;
}