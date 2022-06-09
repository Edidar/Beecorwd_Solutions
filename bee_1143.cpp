#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,a,d,t;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = i, k = 1; j <= 3, k <= 3; j++, k++)
        // {
        //     cout << pow(i, k) <<" ";
        // }
        // cout << "\n";
        d=i*i;
        t = i*i*i;
        cout<<i<<" "<<d<<" "<<t<<endl;
    }
}