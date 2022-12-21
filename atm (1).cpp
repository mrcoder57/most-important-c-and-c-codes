#include<iostream>
#include<conio.h>
using namespace std;
void showmenu(){
cout<<"*****menu*****"<<endl;
cout<<"check balances"<<endl;
cout<<"deposit"<<endl;
cout<<"withdraw"<<endl;
cout<<"***************"<<endl;
}
int main(){
int options;
double balance=500;
do{
showmenu();
cout<<"options";
cin>>options;
clrscr();
switch(options){
case 1: cout<<"balance is"<<balance<<"$"<<endl;break;
case 2:cout<<"\ndeposit";
double deposit;
cin>>deposit;
balance+=deposit;
break;
case 3: cout<<"withdrawal";
double withdrawal;
cin>>withdrawal;
if(withdrawal<=balance)
balance-=withdrawal;
else
cout<<" not enough money"<<endl;
break;
}
}
while(options!=4);


return 0;
}
