#include <iostream>


using namespace std;
void num_sum()
{
    /*/
    +1) ��������� ����������� ����� �� ��������� 7 ��������
    +2) ��� ������� ��������� ������� ������� ��� �������� �������� �� ������� �� 55
    +3) ����������� ����� ���������� � ��� ���������
    +4) � ����������� �������� ���������� ������� �� ������� �� 55
    */
    int n, count = 0;
    long int array[7][52] = {};
    cin >> n;
    for (int i = 0; i < n; ++i)
         {
        int num;
        cin >> num;
        if (num % 52== 0)
            count += array[i % 7][0];
            else count += array[i % 7][52 - (num % 52)];
            array[i % 7][num % 52] += 1;
    }
    cout << count;
}
int main()
{
    num_sum();
    return 0;
}


