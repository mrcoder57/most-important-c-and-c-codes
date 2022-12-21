#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
clrscr();
int i=1;
int marks[37];
  
for(;i < 37;)
{
cout<<"enter the marks of " <<i<<" student of the class\n";
cin>>marks[i];
i++;
}
for(int i=1;i < 37;)
{
cout<<" the marks of "<<i<<" students of class is "<<endl<<endl;
cout<<marks[i]<<endl;
i++;
}
return 0;
}