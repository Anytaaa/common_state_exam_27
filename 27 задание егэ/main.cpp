#include <iostream>
#include <vector>


using namespace std;

void min_sum()

{
    /**

    ��������� ���������� ����� ���� ��������� (������� �� ������ ������ � ���������, �� ����� ���� �
���������� �� ��������) ����� �� ���������, ��� ���� ����� ������ ���������� ���� �� ����� �� ���������� �� ����� 4
 (�� ���� ����� ���� ������ ������ ������� 3 ������ �����).

 +1. ������� �����
 +2. ������� ����
 +3. ������� ���� � ����������� �����������
 +4. ������ ������ ���� ��������� �����
 +5. ����� ������� ����� ����
 **/

    int n(0),sum_1=0,min_sum=2005 ;
    cin >> n ;
    vector<int> numbers(n,0);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            if (i-j>3)
        {
            sum_1 = numbers[j] + numbers[i];
            if(sum_1<min_sum)
                min_sum = sum_1;
        }
    cout << min_sum;
}

int main()
{
    min_sum();

    return 0;
}
