#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
   
    float x,y,avg, temx, temy,arr[2];
    int check = 0,i=0;
    while (1)
    {
        if (check == 2)
        {
            break;
        }
    
        cin >> x;
        if (x >= 0 && x <= 10)
        {
            check++;
            arr[i] = x;
            i++;
        }
        
        else
            cout << "nota invalida" << endl;
            
        cin >> y;
        if (y >= 0 && y <= 10)
        {
            check++;
            arr[i] = y;
            i++;
        }
        else
            cout << "nota invalida" << endl;
    }
    avg = (arr[0] + arr[1]) / 2;
    cout << "media = " << fixed << setprecision(2) << avg << endl;
}