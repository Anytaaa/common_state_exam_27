#include <iostream>
#include <string>

using namespace std;

void
number_of_22()
{
    /**
    +1) ������� �����
    +2) �������� ��� � ������ �� ���������
    3) ����� n165*n5+n165*n11+n165*n55+n165*no+n165*(n165-1)/2+n5*n55
    **/

    int n(0),cur(0);
    int n22(0),n2(0),n11(0),no(0);
    cin>>n;
    for (int i(0);i<n;i++)
    {
        cin>>cur;
        if(cur%165==0)n165++;
        else if (cur%5==0)n5++;
        else if (cur%55==0)n55++;
        else if (cur%11==0)n11++;
    }
