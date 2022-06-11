#include <iostream>
using namespace std;
int main()
{
    int x, y, tem, j = 0, ct = 1;
    cin >> x >> y;
    if (x > y)
    {
        tem = x;
        x = y;
        y = tem;
    }
    for (int j = 1; j <= y; j++)
    {
        if (ct == x)
        {
            cout<<j;
            cout << endl;
            ct = 1;
        }
        else
        {
            cout<<j<<" ";
            ct++;
        }
        
    }
}