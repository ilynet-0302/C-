#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Knigi= ";
    cin>>a;
    cout<<"Vestnici= ";
    cin>>b;
    cout<<"Spisania= ";
    cin>>c;
    cout<<"Knigi= "<<ceil(a/15)<<endl;
    cout<<"Vestnici= "<<ceil(b/15)<<endl;
    cout<<"Spisania= "<<ceil(c/15)<<endl;
    return 0;
}
