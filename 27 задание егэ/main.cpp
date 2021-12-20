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
    1)берем первые 7 чисел
    2) просматриваем их на предмет того, кратны ли они 27
    3) берем следующие числа от 7 до конца
    */



int main()
{
    num_sum();
    return 0;
}
