#include <iostream>
#include <vector>
using namespace std;

void test_a()
{
    /**
    +1) ввести числа
    2) вычеслить количество троек различных элементов
    3) понять делится лиэто количество на 4
    4) подсчет контрольной сумммы

    */

int n(0);
    cin >> n;
    vector <int> numbers(n);
    for (int i(0); i<n; i++)
            cin>> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] << " ";

}
int main()
{
    test_a();
    return 0;
}
