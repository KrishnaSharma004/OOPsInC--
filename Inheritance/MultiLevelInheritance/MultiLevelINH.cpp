#include <iostream>
#include <string>
using namespace std;
#define nl endl
#define str string
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
class Position:public Footballer{
    public :
    str position;
};
class CenterMidFilder:public Position{
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
    cout << "Tell us position of Zidane :" ;
    str s;
    cin >> s;
    Zidane.position=s;
    cout << "Zidane's Detail : --> " << nl;
    cout << "Zidane Jersye no. :" << Zidane.JersyeNumber << nl;
    cout << "Zidane Shoes no. :" << Zidane.getShoesNumber() << nl;
    cout << "Zidane's Position : " << Zidane.position << nl;
    cout << "Zidane Total Assits :" << Zidane.TotalAssits << nl;
    cout << "Zidane Total MAtches :" << Zidane.getTotalMatches() << nl;

    return 0;
}
/*Base class member Access Specifier.  ->  public.    protected.   private.

       Public                              public     protected    private
       Protected                           protected  protected    private
       Private                             NOTAss     NOTAss       NOTAss
*/