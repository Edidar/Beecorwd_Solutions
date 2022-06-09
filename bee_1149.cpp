#include<iostream>
using namespace std;
int main()
{
    int a,n,sum = 0;
    cin>>a>>n;
    while(1)
    {
        if(n<=0)
        {
            cin>>n;
        }
        else
        break;

    }
    for(int i = 0; i<n; i++)
    {
        sum+=a+i;
    }
    cout<<sum<<endl;
    return 0;
}