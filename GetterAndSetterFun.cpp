//Getter can be used to fetch the data 
//Setter can be used to apply conditins on the input of the objects
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
    //Object Creation
    Kohli goat;
    string s;
    cout << "Enter the Skill :";
    cin >> s;
    goat.setSkill(s);
    cout << "Kohli's Skill is : " << goat.getSkill() << endl;

    return 0;
}