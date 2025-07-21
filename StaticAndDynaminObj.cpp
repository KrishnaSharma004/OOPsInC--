
#include <string>
#include <iostream>
using namespace std;

class Kohli{
    //Properties
    private://also if not mentioned the acsses specifier then the default is "Private"

    string Skill;

    public:
    string getSkill(){
        return Skill;
    }
    void setSkill(string s){
        Skill = s;
    }
};
int main(){
    //Statically Object Creation
    Kohli goat;
    string s;
    cout << "Enter the Skill :";
    cin >> s;
    goat.setSkill(s);
    cout << "Kohli's Skill is : " << goat.getSkill() << endl;
    //Dynamically Object Creation
    Kohli *Goat = new Kohli;
    string s1;
    cout << "Enter the Skill :";
    cin >>  s1;
    (*Goat).setSkill(s1);
    cout << "Kohli's Skill is :" << Goat->getSkill() << endl;
    return 0;
}