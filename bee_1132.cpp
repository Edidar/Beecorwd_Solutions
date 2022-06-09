#include <iostream>
using namespace std;
int main()
{
    int x,y,sum=0,i,tem;
    cin>>x>>y;
    if(x>y)
    {
        tem = x;
        x = y;
        y = tem;
    }
    for(i=x; i<=y; i++)
    {
        if(i % 13 == 0)
        continue;

        sum+=(i);
    }
    cout<<sum<<endl;
}