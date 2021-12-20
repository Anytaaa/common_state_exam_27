#include <iostream>
#include <vector>

using namespace std;
void div_10()
{
   /**
    +1) считать числа
    +2) добавить его к одному из счетчиков
    3) ответ n22*n11+n22*n2+n22*no+n22(n22-1)/2*n11*n2
    **/
   int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int j = 0; j < n; ++j)
        for (int i = j + 1; i < n; ++i)
            cout << numbers[j] << ' ' << numbers[i] << endl;
}

int main()
{
    div_10();
    return 0;
}
