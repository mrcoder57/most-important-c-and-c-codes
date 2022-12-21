#include<iostream>
using namespace std;
class students {
int a,b,d;

public:
students (void);
void printstudents(){
cout<<"the marks of students"<<"\n"<<a<<"\n"<<b<<"\n"<<d<<endl;
}
};
students:: students(void)
{
a=20;
b=10;
d= 34;
}
int
 main(){
students c;
c.printstudents();
}
