#include <iostream>
using namespace std;
int main()
{
    int a,s=365,S,Y;//�������� �� ������������
    cout<<"Br_day="<<endl;//�������� �� ������ "Br_day="
    cin>>a;//������� �� ������������ �� �� ������ ��������
    S=a/s;//S=8760/365=24;
    Y=S/2;//Y=24/2=12;
    cout<<"M_year="<<Y<<endl;//�������� �� ������ "M_year=" � �������� Y
    return 0;//��������� ����������
}
