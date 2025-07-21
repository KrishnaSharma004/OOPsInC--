//Systems Constructor dies automatically after the creation of manual constructor 
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
};
int main(){
    //Statically Object Creation
    Kohli goat;
    //Dynamically Object Creation
    Kohli *Goat = new Kohli;
    //Using copy Constructor :
    //in this case the perameterized constructor will be called!!
    Kohli OG("Legend");
    cout << OG.print() << endl;

    //Using copy constructor :
    //in this case the copy cinstructor will be called!!
    Kohli best(OG);
    cout << best.print() << endl;
    return 0;
} 