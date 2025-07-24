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
class CenterMidFilder:private Footballer{
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
//Public and protected data members becomes private in the derived class 
int main(){
    CenterMidFilder Zidane;
    Zidane.TotalAssits=127;
    Zidane.SetTotalMatches(700);
    
    cout << "Zidane Total Assits :" << Zidane.TotalAssits << nl;
    cout << "Zidane Total MAtches :" << Zidane.getTotalMatches() << nl;

    return 0;
    
}
/*Base class member Access Specifier.  ->  public.    protected.   private.

       Public                              public     protected    private
       Protected                           protected  protected    private
       Private                             NOTAss     NOTAss       NOTAss
*/