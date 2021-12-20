#include <iostream>
#include <vector>
using namespace std;

void  min_66()
{
    /**

    + 1) считать числа
    + 2) вывести пары
    3) вывести пары с минимальным расстоянием
    4) вместо вывода пары подсчитать сумму
    5) найти минимум среди сумм
    **/

    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            cout << numbers[j]<<" "<<numbers[i]<< endl;
}

int main()
{
    min_66();
    return 0;
}
