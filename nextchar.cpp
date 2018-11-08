#include <iostream>
using namespace std;
int main()
{
    char s;
    cin>>s;
    s=s+1;
    int n=s-'a';
    s='a'+n%26;
    cout<<s<<endl;
    return 0;
}
