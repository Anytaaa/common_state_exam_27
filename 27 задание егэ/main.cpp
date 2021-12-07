#include <iostream>
#include <vector>

using namespace std;

void min_sum_effectiv()
{
    /**
    +1.считать 4 числа в червяке
    +2.число в хвосте червяка - потенциальный минимум из пройденных
    +3. сдвинуть все числа в червяке в лево(0123-1234)
    +4.считать  5 число в зубе червяка
    +6.собрать пару из того,что в зубах червяка и пройденный минимум
    +7.это кандидат на минимальную пару
    +8.один ход червяка закончен,повторяем
    **/


    int n,probably=10000,sum=9000;
    cin >> n;
    vector<int> numbers(4,0);
    for (int i(0); i<4; i++)
        cin >> numbers[i];

    for (int p(0); p<n - 4; p++)
    {
        int l_num = numbers[0];
        probably=min(probably,l_num);
        for (int i =0;i<3;i++)
            numbers[i]=numbers[i+1];
            cin>>numbers[3];
        if (sum > probably + numbers[3])
            sum = probably + numbers[3];
    }
    cout<<sum;
}
int main()
{

    min_sum_effectiv();
    return 0;
}
