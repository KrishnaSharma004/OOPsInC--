//Static Data memders are the mebers which belongs to class.
// We can access the static data member without creating a object of the class.
#include <string>
#include <iostream>
using namespace std;

class Kohli{
    //Properties
    private://also if not mentioned the acsses specifier then the default is "Private"

    string Skill;

    public:
    static int number;
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

//initialize the static dtata member.
int Kohli::number = 3;

int main(){
    cout << "Kohli Batting number is:" << Kohli::number << endl;
 
    return 0;
} 