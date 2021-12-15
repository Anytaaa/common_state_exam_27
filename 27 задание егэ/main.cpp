#include <iostream>
#include <vector>
using namespace std;

void sum_max_num()
{
    /**
     +1)считать числа
     +2)найти наибольшее четное и наибольшее нечетное числа
     +3)вывести сумму наибольших чисел
    */
     int n(0);
    cin >> n;
    vector <int> numbers(n);
    int max_div = -2000;
    int max_not_div = -2000;
    for (int i(0); i<n; i++)
            {
                cin>> numbers[i];
                if (numbers[i] % 2 == 0)
                    {   if (numbers[i] > max_div)
                        max_div = numbers[i];
                    }

                else if (numbers[i] % 2 != 0)
                        if (numbers[i] > max_not_div)
                            max_not_div = numbers[i];
            }

    if (max_not_div + max_div < 0)
        cout << -1;
    else cout << max_not_div + max_div;

}
int main()
{
    sum_max_num();
    return 0;
}
