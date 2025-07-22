#include <iostream>
#include <string>
using namespace std;
#define nl endl

class Footballer{
    public:
    int JersyeNumber;
    private:
    int ShoesNumber;
    protected:
    int TotalMatches;

    public:
    void setShoesNumber(int Shoes){
        this->ShoesNumber= Shoes;
    }
    int getShoesNumber(){
        return this->ShoesNumber;
    }
};
class CenterMidFilder:public Footballer{
    public:
    int TotalAssits;
    void SetTotalMatches(int Matches){
        this->TotalMatches = Matches;
    }
    int getTotalMatches(){
        return TotalMatches;
    }
};

int main(){
    CenterMidFilder Zidane;
    Zidane.JersyeNumber=10;
    Zidane.TotalAssits=127;
    Zidane.SetTotalMatches(700);
    Zidane.setShoesNumber(9);

    cout << "Zidane Jersye no. :" << Zidane.JersyeNumber << nl;
    cout << "Zidane Shoes no. :" << Zidane.getShoesNumber() << nl;
    cout << "Zidane Total Assits :" << Zidane.TotalAssits << nl;
    cout << "Zidane Total MAtches :" << Zidane.getTotalMatches() << nl;

    return 0;
}