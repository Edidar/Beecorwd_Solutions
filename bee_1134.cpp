#include<iostream>
using namespace std;
int main()
{
    int n,al=0,gs=0,di=0;
    while (1)
    {
        cin>>n;
        if(n == 4)
        {
            break; 
        }
        else if(n == 1)
        {
            al++;
        }
        else if(n == 2)
        {
            gs++;
        }
        else if(n == 3)
        {
            di++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<gs<<endl;
    cout<<"Diesel: "<<di<<endl;
    return 0;
}