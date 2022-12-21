#include<iostream>
using namespace std;
int gcd();

int gcd(int a, int b){
int R;
R=a%b;
if(R==0)
return(b);
else 
return (gcd (b,R));
}
int main(){
int c,d,a,b, great;
cout<<"value of a";
cin>>a;
cout<<"value of b";
cin>>b;
gcd(a,b);
cout<<gcd(a,b);

}