##include <iostream>
#include <vector>
using namespace std;

void num_sum()
{
    /**
     +1)������� ������������������ �����
     +2) ������� ���� ��������������� ������� �������
     3) ������� ���� ��������������� ������� �������
     4) ������� �����
    */
   int n;
   cin >> n;
   vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

   for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
    {
        if (abs(i - j) % 7 == 0)
            cout << numbers[i] << ' ' << numbers[j] << endl;
    }
}
int main()
{
    num_sum();
    return 0;
}
