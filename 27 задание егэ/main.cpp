#include <iostream>
#include <vector>

using namespace std;

void num_sum()
{
    /**
     +1)������� ������������������ �����
     +2) ������� ���� ��������������� ������� �������
     +3) ������� ���� ��������������� ������� �������
     +4) ������� �����
    */
   int n;
   cin >> n;
   vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    int count = 0;
   for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
    {
        if ((abs(i - j) < 7) and ((numbers[i] + numbers[j]) % 27 == 0))
            count += 1;
    }
    cout << count;
}
int main()
{
    num_sum();
    return 0;
}
