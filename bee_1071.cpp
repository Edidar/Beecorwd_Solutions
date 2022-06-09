#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum = 0;
    int tem;
    cin >> x >> y;
    if (x < 0 && x < y || x>0 && x<y)
    {
       
        tem = x;
        x = y;
        y = tem;
    }
    //if (x >= 0 && x > y)
    //{
        for (int i = x - 1; i > y; i--)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    //}
    cout << sum << endl;
}