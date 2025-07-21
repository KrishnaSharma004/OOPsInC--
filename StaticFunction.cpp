//Static functions can only access the static data members.
//They don't support this pointer bcz they belongs to the class not to any object.
#include <string>
#include <iostream>
using namespace std;

class Kohli{
    //Properties
    private://also if not mentioned the acsses specifier then the default is "Private"

    string Skill;

    public:
    //Static data member.
    static int number;

    //static function.
    static int Function(){
        return number ;
    }

    string print(){
        return Skill;
    }
    //Default Constructor
    Kohli(){
        cout << "Virat is the goat" << endl;
        cout << "Default constructor is Called" << endl;
    }
    //Perameterized Constructor
    Kohli(string Skill){
        cout << "Perameterized constructor is called" << endl;
        this->Skill = Skill;
    }
    
    ~Kohli(){
        cout << "Kohli is the Destroyer" << endl;
        cout << "Destructor is called" << endl;
    }
};
int Kohli::number = 3;

int main(){
    //Static function call:
    cout << "Kohli Batting number is:" << Kohli::Function() << endl;
 
    return 0;
} 