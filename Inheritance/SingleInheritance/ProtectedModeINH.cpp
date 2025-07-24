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
class CenterMidFilder:protected Footballer{
    public:
    int TotalAssits;
    void SetTotalMatches(int Matches){
        this->TotalMatches = Matches;
    }
    int getTotalMatches(){
        return TotalMatches;
    }
    void SetJerseyNumber(int jersey){
        this->JersyeNumber=jersey;
    }
    int GetJerseyNumber(){
        return JersyeNumber;
    }
};
//Public data members becomes protected in the derived class 
int main(){
    CenterMidFilder Zidane;
    Zidane.SetJerseyNumber(10);
    Zidane.TotalAssits=127;
    Zidane.SetTotalMatches(700);
    
    cout << "Zidane Jersye no. :" << Zidane.GetJerseyNumber() << nl;
    cout << "Zidane Total Assits :" << Zidane.TotalAssits << nl;
    cout << "Zidane Total MAtches :" << Zidane.getTotalMatches() << nl;

    return 0;
    //SetShoesNumber() GetShoesNumber() is inaccessible
}
/*Base class member Access Specifier.  ->  public.    protected.   private.

       Public                              public     protected    private
       Protected                           protected  protected    private
       Private                             NOTAss     NOTAss       NOTAss
*/