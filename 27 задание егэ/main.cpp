#include <iostream>

using namespace std;
void test_1661_1()
{
    /**
    1) считать числа
    2) делится на 55
       делится на 5 и не делится на 11
       делится на 11 и не делится на 5
       не делится ни на 11 ни на 5
    3) ответ n55 * n11 + n5 * n 55+ n55 *no + n55(n55-1) / 2 * n5 *n11
    */
    int n(0), cur(0);
    int n55(0), n5(0), no(0), n11(0);
    cin >> n;
    for (int i(0);i<n;i++)
    {
        cin>>cur;
        if(cur%55 == 0)n55++;
        else if (cur%5==0)n5++;
        else if(cur%11==0)n11++;

    }
    no = n - n55 - n5 - n11;
    cout<<n55*n5 + n55* n11 + n55 * no + n55 *(n55-1)/2 +n5 * n11<< endl;
}
