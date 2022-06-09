#include<iostream>
using namespace std;
int main()
{
    int inter_goal,Gremio_goal,ict=0,gct=0,num_match=0,check,draw=0;
    while(1)
    {
        cin>>inter_goal>>Gremio_goal;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        num_match++;
        if(inter_goal>Gremio_goal)
        ict++;
        else if(Gremio_goal>inter_goal)
        gct++;
        else if(inter_goal == Gremio_goal)
        draw++;
        cin>>check;
        if(check==1)
        continue;
        else
        break;
    }
    cout<<num_match<<" grenais"<<endl;
    cout<<"Inter:"<<ict<<endl;
    cout<<"Gremio:"<<gct<<endl;
    cout<<"Empates:"<<draw<<endl;
    if(ict>gct)
    cout<<"Inter venceu mais"<<endl;
    else
    cout<<"Gremio venceu mais"<<endl;

    return 0; 

}