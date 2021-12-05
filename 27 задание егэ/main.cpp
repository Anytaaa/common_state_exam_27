#include <iostream>
#include <string>

using namespace std;

void
number_of_22()
{
    /**
    +1) считать числа
    +2) добавить его к одному из счетчиков
    +3) ответ n165*n5+n165*n11+n165*n55+n165*no+n165*(n165-1)/2+n5*n55
    **/

    int n(0),cur(0);
    int n22(0),n2(0),n11(0),no(0);
    cin>>n;
    for (int i(0);i<n;i++)
