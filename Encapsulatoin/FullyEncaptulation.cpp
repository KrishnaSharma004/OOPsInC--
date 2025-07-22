//Encapsulation : Wraping up of data members and the member function/behavior.
#include <iostream>
#include <string>
using namespace std;
#define nl endl
#define ll long long 

class Kohli{
    //Fully Encapsulation : Making all data mebers private.
    private:
    int StrikeRate;
    int Runs;

    public:
    Kohli(int StrikeRate,int Runs){
        this-> StrikeRate = StrikeRate;
        this-> Runs = Runs;
    }
    int getStrikeRate(){
        return this->StrikeRate;
    }
    int getRuns(){
        return this->Runs;
    }
};
int main(){
    Kohli goat(135,2700);
    cout << "Kohli's StrikeRate is :" << goat.getStrikeRate() << nl;
    cout << "Kohli's Total Run : " << goat.getRuns() << nl;
    return 0;
}