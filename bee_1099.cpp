#include <iostream>
using namespace std;
int main()
{
    int n, x, y, sum = 0, tem;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cin >> x >> y;
        if (x < y)
        {
            tem = x;
            x = y;
            y = tem;
        }
        for (int j = x - 1; j > y; j--)
        {
            
            if (j % 2 != 0)
            {
                sum = sum + j;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}