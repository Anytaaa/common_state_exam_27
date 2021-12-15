#include <iostream>

using namespace std;

void max_sum_div_eff_2()
{
    /**
     +1)заполнить массив 2 на 40
     +2)затем заполнить массив с счетчиками [x > 40][x % 40] += 1
     +3)суммировать комплементарные остатки для 40 отдельно, 20 отдельно, остальных отдельно
    */
    int x = 0;
    int meter[2][40];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            meter[i][j] = 0;
        }
    }
    cin>> x;
    while (x != -9999)
    {
        meter[x > 40][x % 40] += 1;
        cin>> x;
    }

    int sum = 0;
    int big_40 = meter[1][0], smal_40 = meter[0][0];
    sum += big_40 * (big_40 - 1) / 2;
    sum += big_40 * smal_40;
    big_40 = meter[1][20];
    smal_40 = meter[0][20];
    sum+= big_40 * (big_40 - 1) / 2;
    sum += big_40 * smal_40;
    for (int i = 1; i < 20; ++i)
    {
        int count_complimentary_num_big_40 = meter[1][40 - i];
        big_40 = meter[1][i];
        int count_complimentary_num_smal_40 = meter[0][40 - i];
        smal_40 = meter[0][i];
        sum += big_40 * count_complimentary_num_big_40;
        sum += big_40 * count_complimentary_num_smal_40;
        sum += smal_40 * count_complimentary_num_big_40;
    }

    cout << sum;
}
int main()
{
    max_sum_div_eff_2();
    return 0 ;
}
