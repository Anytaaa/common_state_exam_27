#include <iostream>
#include <vector>
using namespace std;

void test_a()
{
    /**
    +1)������ �����
    +2)��������� ���������� ����� ��������� ���������
    +3)������ ������� �� ��� ���������� �� 4
    +4)������� ����������� ������

    */

 int n(0);
    cin >> n;
    vector <int> numbers(n);
    for (int i(0); i<n; i++)
            cin>> numbers[i];
    cout << endl;
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            for (int i(i+1);i<n;i++)
            if ((numbers[j] + numbers[i]) % 4 != 0)
            cout << numbers[j]<<" "<<numbers[i]<< endl;


}
int main()
{
    test_a();
    return 0;
}
