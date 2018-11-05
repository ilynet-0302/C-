#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,x,Pr;
    cin>>x;
    a=x/10000000;
    b=x/1000000%10;
    c=x/100000%10%10;
    d=x/10000%100%10;
    e=x/1000%100%100;
    f=x/100%100%100%10;
    g=x/10%100%100%100;
    h=x/%100%100%100%10;
    Pr=a+b+c+d+e+f+g+h
    cout<<Pr;
    return 0;

}
