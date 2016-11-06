#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    cout<<"d="; cin>>d;
    cout<<"e="; cin>>e;
    if(a>b && a>c && a>d && a>e) {cout<<"The biggest number is: a";}
    if(b>a && b>c && b>d && b>e) {cout<<"The biggest number is: b";}
    if(c>a && c>b && c>d && c>e) {cout<<"The biggest number is: c";}
    if(d>a && d>b && d>c && d>e) {cout<<"The biggest number is: d";}
    if(e>a && e>b && e>c && e>d) {cout<<"The biggest number is: e";}

    return 0;
}
