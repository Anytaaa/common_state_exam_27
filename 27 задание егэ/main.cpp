#include <iostream>
#include <string>

using namespace std;

void
number_of_10()
{
    /**
    +1) считать числа
    +2) добавить его к одному из счетчиков
    +3) ответ n10*n5+n10*n2+n10*no+n10(n10-1)/2*n5*n2
    **/



    int n(0),cur(0);
    int n10(0),n2(0),n5(0),no(0);
    cin>>n;
    for (int i(0);i<n;i++)
    {
        cin>>cur;
        if(cur%10==0)n10++;
        else if (cur%2==0)n2++;
        else if (cur%5==0)n5++;
    }
    no = n-n10-n2-n5;
    cout<<
    n10*n5+n10*n2+n10*no+n10*(n10-1)/2+n5*n2<<endl;
}
int main()
{
    number_of_10();
    return 0;
}
