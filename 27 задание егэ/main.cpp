#include <iostream>
#include <string>

using namespace std;

void
number_of_165()
{
    /**
    +1) считать числа
    +2) добавить его к одному из счетчиков
    +3) ответ n165*n3+ n165*n5+n165*n11+n165*n15+n165*n33+n165*n55+n165*no+n165*(n165-1)/2+n15*n11+n15*n55+n15*n33+n33*n55+n3*n55+n5*n33
    **/

    int n(0),cur(0);
    int n165(0),n5(0),n15(0),n33(0),n11(0),n55(0),n3(0),no(0);
    cin>>n;
    for (int i(0);i<n;i++)
    {
        cin>>cur;
        if(cur%165==0)n165++;
        else if (cur%5==0)n5++;
        else if (cur%55==0)n55++;
        else if (cur%11==0)n11++;
        else if (cur%3==0)n3++;
        else if (cur%15==0)n15++;
        else if (cur%33==0)n33++;


    }
    no = n-n165-n5-n55-n11-n3-n15-n33;
    cout<<
    n165*n3+ n165*n5+n165*n11+n165*n15+n165*n33+n165*n55+n165*no+n165*(n165-1)/2+n15*n11+n15*n55+n15*n33+n33*n55+n3*n55+n5*n33<<endl;
}
int main()
{
    number_of_165();
    return 0;
}
