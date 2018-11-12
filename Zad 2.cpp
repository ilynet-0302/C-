#include <iostream>
using namespace std;
int main()
{
    int a,s=365,S,Y;//Въвеждам си променливите
    cout<<"Br_day="<<endl;//Извеждам на екрана "Br_day="
    cin>>a;//Задавам за необходимост да се въведе стойност
    S=a/s;//S=8760/365=24;
    Y=S/2;//Y=24/2=12;
    cout<<"M_year="<<Y<<endl;//Извеждам на екрана "M_year=" и извеждам Y
    return 0;//Завършвам програмата
}
