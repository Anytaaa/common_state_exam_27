#include <iostream>
#include <vector>
using namespace std;

void  min_66()
{
    /**

    + 1) ������� �����
    + 2) ������� ����
    + 3) ������� ���� � ����������� �����������
    4) ������ ������ ���� ���������� �����
    5) ����� ������� ����� ����
    **/

    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            if (i - j > 3)
                cout << numbers[j] << " " <<numbers[i] << endl;
}

int main()
{
    min_66();
    return 0;
}
