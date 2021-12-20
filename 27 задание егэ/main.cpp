#include <iostream>
#include <vector>

using namespace std;
void div_66()
{
    /**
     +1) считать и запомнить числа
     +2) вывести все пары чисел
     +3) вместо пар вывести произведения
     +4) проверить делимость произведений
     +5) посчиттать и выести коичество подходящих пар
    */
   int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    int good_pair= 0;
    for (int j = 0; j < n; ++j)
        for (int i = j + 1; i < n; ++i)
            {
                int cur_prod = numbers[j] * numbers[i];
                if (cur_prod % 91 == 0)
                    good_pair++;
            }
    cout << good_pair;
}

int main()
{
    div_66();
    return 0;
}
