#include <iostream>
#include <vector>

using namespace std;

void min_sum_effectiv()
{
    /**
    +1.������� 4 ����� � �������
    +2.����� � ������ ������� - ������������� ������� �� ����������
    3. �������� ��� ����� � ������� � ����(0123-1234)
    4.�������  5 ����� � ���� �������
    6.������� ���� �� ����,��� � ����� ������� � ���������� �������
    7.��� �������� �� ����������� ����
    8.���� ��� ������� ��������,���������
    **/


    int n,probably;
    cin >> n;
    vector<int> numbers(4,0);
    for (int i(0); i<4; i++)
    {
        cin >> numbers[i];
    }
    for (int i(0); i<4; i++)
    {
        int l_num = numbers[0];
        probably=min(probably,l_num);
        for (int i =0;i<3;i++)
            numbers[i]=numbers[i+1];
            cin>>numbers[3];
        for (int i(4);i>0;--i)
            cout << numbers[i]<<" ";
    }
}
int main()
{

    min_sum_effectiv();
    return 0;
}
