#include <iostream>
using namespace std;
int main()
{
    int i, j = 0, n, check = 3;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (j = j + 1; j <= n * 4; j++)
        {

            if (j % 4 == 0)
            {
                break;
                ;
            }
            cout << j << " ";
        }
        cout << "PUM" << endl;
    }
}