#include<iostream>
using namespace std;
int main(){
int n,flag;
string c;
string Rev;
cout<<"eneter the string";
cin>>c;
n=c.length();
for(int i=n-1;i>=0;i--){
Rev=Rev+c.at(i);
}
cout<<Rev<<endl;
for(int i=0;i <n ;i++)
        {
                if(c[i] != Rev[n-i-1])
                {
                        flag = 1;
                        break;
                }
        }    
        if(flag)
        {
                cout<<" "<<c<<" is not a palindrome"<<endl;
        }    
        else
        {
                cout<<" "<<c<< " is a palindrome"<<endl;
        }
return 0;
}