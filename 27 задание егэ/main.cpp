#include <iostream>
#include <vector>

using namespace std;

void div_10()
{
    /**
    +1) считать числа
    +2) добавить его к одному из счетчиков
    +3) ответ n10*n5+n10*n2+n10*no+n10(n10-1)/2*n5*n2
    **/
}

int n10 = 0, n5 = 0, n2 = 0, no = 0;
   int n = 0, cur = 0;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> cur;

        if (cur % 10 == 0)
            n6++;
        else if (cur % 2 ==0)
            n2++;
        else if (cur % 5 == 0)
            n3++;
    }

    no = n - n10 - n5 - n2;
    cout << n10 << ' ' << n5 << ' ' << n2 << ' ' <<  no;


}

int main()
{
    div_10();
    return 0;
}
