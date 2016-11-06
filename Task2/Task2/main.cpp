#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    if(a>0 && b>0 && c>0) {cout<<"+"<<endl;}
    if(a<0 && b>0 && c>0) {cout<<"-"<<endl;}
    if(a>0 && b<0 && c>0) {cout<<"-"<<endl;}
    if(a>0 && b>0 && c<0) {cout<<"-"<<endl;}
    if(a<0 && b<0 && c>0) {cout<<"+"<<endl;}
    if(a<0 && b>0 && c<0) {cout<<"+"<<endl;}
    if(a>0 && b<0 && c<0) {cout<<"+"<<endl;}
    if(a<0 && b<0 && c<0) {cout<<"-"<<endl;}
    if(a==0 || b==0 || c==0) {cout<<"0";}
    return 0;
}
