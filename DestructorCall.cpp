//Systems Destructor dies after manual creation of the Destructor
#include <string>
#include <iostream>
using namespace std;

class Kohli{
    //Properties
    private://also if not mentioned the acsses specifier then the default is "Private"

    string Skill;

    public:
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
    //"this" is a pointer to the current object.

    //Copy Constructor 
    //Note : Always pass by refferance in the copy constructor 
    //Note : Copy constructor makes shallow copy 
    Kohli(Kohli &obj){
        cout << "Copy constructor is called" << endl;
        this->Skill=obj.Skill;
    }
    ~Kohli(){
        cout << "Kohli is the Destroyer" << endl;
        cout << "Destructor is called" << endl;
    }
};
int main(){
    //Statically Object Creation
    //in case of static creation of object the destructor is called automatically when object becomes out of scope
    Kohli goat;

    //Dynamically Object Creation
    //in case of dynamic alloction of the object the destructor is called only when we use delete operator or have to call destructor manually
    Kohli *Goat = new Kohli;
    //Manually destructor call
    delete Goat;
 
    return 0;
} 