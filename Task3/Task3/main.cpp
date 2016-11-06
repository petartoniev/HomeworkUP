#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"input first number: "; cin>>a;
    cout<<"input second number: "; cin>>b;
    cout<<((a+b)%2==0 ? (a+b)*2 : (a+b)/2 );
    return 0;
}
