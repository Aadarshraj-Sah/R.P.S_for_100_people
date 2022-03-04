#include <iostream>
using namespace std;

int main(){

    int NumberOfPlayers;
    cin>>NumberOfPlayers;
//        100 in this case
    
/*        each player will be assigned a number from 0-99
          They will be Player_0, Player_1, ... Player_99      */
    
    int TotalTournaments;
    cin>>TotalTournaments;

    for(int j = 1; j<=TotalTournaments; j++){
        int sum=0;

//        each player has to choose a random number from (0-99) of their choice
        for(int i=0; i<NumberOfPlayers; i++){
            int n;
            cin>>n;
            sum+=n;
        }

//        winner will be decided based on final sum
        cout<<"Winner of Tournament_"<<j<<" is Player_"<<sum%NumberOfPlayers<<endl;
    }

}

