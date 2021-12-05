#include <iostream>
#include <string>

using namespace std;

void
number_of_22()
{
    /**
    +1) считать числа
    +2) добавить его к одному из счетчиков
    +3) ответ n22*n11+n22*n2+n22*no+n22(n22-1)/2*n11*n2
    **/



    int n(0),cur(0);
    int n22(0),n2(0),n11(0),no(0);
    cin>>n;
    for (int i(0);i<n;i++)
    {
        cin>>cur;
        if(cur%22==0)n22++;
        else if (cur%2==0)n2++;
        else if (cur%11==0)n11++;
    }
    no = n-n22-n2-n11;
    cout<<
    n22*n11+n22*n2+n22*no+n22*(n22-1)/2+n11*n2<<endl;
}
int main()
{
    number_of_22();
    return 0;
}
