#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div()

{
    ifstream ifs("data.txt");
    /**
    +1. ������� � ��������� ��� �����
    +2. ������� ��� ����
    +3. ������ ���� ������� �����
    +4. ����� ����� ���������
    +5. ������� ������ ���������� �����
    **/
    int n(0);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        ifs >> numbers[i];
    int max_sum(0);
    for (int i(0); i<n-1; i++)
        for (int j(i+1); j<n; j++)
        {
            int cur_sum(numbers[i] + numbers[j]);
            if(cur_sum%2 != 0 and cur_sum > max_sum)
                max_sum = cur_sum;
        }
        cout << max_sum << endl;

}

int main()
{
    max_sum_div();

    return 0;
}
