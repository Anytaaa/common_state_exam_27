#include <iostream>
#include <vector>
using namespace std;

bool is_sum(int a, int b)
{
    return ((a + b) % 27 == 0);
}

void num_sum()
{
    /*/
    +1)берем первые 7 чисел
    +2) просматриваем их на предмет того, кратны ли они 27
    3) берем следующие числа от 7 до конца
    */
int N;
    cin >> N;
    int count = 0;
    vector<int> number(7, 0);

    for (int i = 0; i < 7; i++)
    {
        cin >> number[i];
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 7; j++)
            count += is_sum(number[i], number[j]);
    }

    for (int i = 7; i < N; i++)
    {
        int a;
        cin >> a;


int main()
{
    num_sum();
    return 0;
}
