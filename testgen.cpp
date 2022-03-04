#include <iostream>
using namespace std;

int main(){
    int NumberOfPlayers;
//    cin>>NumberOfPlayers;
    NumberOfPlayers=100;
    
    int TotalTournaments;
//    cin>>TotalTournaments;
    TotalTournaments=1e6;
    
    cout<<NumberOfPlayers<<endl;
    cout<<TotalTournaments<<endl;
    for(int j = 1; j<=TotalTournaments; j++){
        for(int i=0; i<NumberOfPlayers; i++){
            cout<<rand()%NumberOfPlayers<<" ";
        }
        cout<<endl;
    }
}
