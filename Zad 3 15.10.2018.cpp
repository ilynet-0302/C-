#include <iostream>
using namespace std;
int main()
{
    int x,a,b,c,S,Pr;
    cin>>x;
    a=x/100;
    b=x/10%10;
    c=x%10;
    S=a+b+c;
    Pr=a*b*c;
    cout<<"S= "<<S<<endl;
    cout<<"Pr= "<<Pr<<endl;
    return 0;
}
